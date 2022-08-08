#include<stdio.h>
void main(){
    int a[2][3];
    int i,j;
    // Reading of Matrix
    printf("Enter the elements of 2D array\n");
     for(i=0;i<2;i++)      // Outer 'for' loop for the "ROWS"
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);

    }
}
printf("Matrix is \n");
  for(i=0;i<2;i++)      
{
    for(j=0;j<3;j++)
    {
     printf("%d\t",a[i][j]);

}
printf("\n");
}

printf("tranpose of matrix\n");
for(i=0;i<3;i++)      
{
    for(j=0;j<2;j++)
    {
     printf("%d\t",a[j][i]);

}
printf("\n");
}
}