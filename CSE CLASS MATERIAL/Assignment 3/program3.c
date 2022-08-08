#include<stdio.h>


void selectionsort(int a[],int n)
{
int min,i,j,swap;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
    if(a[j]<a[min])
    min=j;
}
if(min !=i)
{
    swap=a[i];
    a[i]=a[min];
    a[min]=swap;
}
}
}

int main() 
{
    int i,j,r,c,a[20][20];
    printf("Enter the no. of rows and columns :");
    scanf("%d%d",&r,&c);
    printf("2d array is :");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        selectionsort(a[i],c);
    }
    printf("\n");
    printf("sorted array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    
}
}
