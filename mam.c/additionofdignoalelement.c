// Addition of diagnoal elements of matrix
#include<stdio.h>
void main ()
{
int i,j,r,s,a[5][5],sum=0;
printf("enter the no. of rows and columns\n");
scanf("%d%d",&r,&s);

printf("Enter the matrix element\n");


for(i=0;i<r;i++)
{
    for(j=0;j<s;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("the matrix is \n");

for(i=0;i<r;i++)
{
    for(j=0;j<s;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<r;i++)
{
    for(j=0;j<s;j++)
    {
        if(i==j)
        {
            sum=sum+a[i][j];
        }
    }
}


printf("sum of diagnol element %d",sum);
}