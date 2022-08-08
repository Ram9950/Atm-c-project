#include<stdio.h>
# define N 50
void main()
{
    int a[N][N],b[N][N],c[N][N];
    int i,j,k,m,n;

    printf("enter the rows and columns of firs matrix\n");
    scanf("%d%d",&m,&n);
    
    printf("first matrix elements:");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("enter the rows and columns of second matrix\n");
    scanf("%d%d",&m,&n);
    
    printf("first matrix elements:");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // Printing of first matrix
    printf("first matrix is:\n");
for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
// Printing of second matrix
 printf("second matrix is:\n");
for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // addition of matrix
    printf("addition of matrix is \n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
        }
        printf("\n");}}