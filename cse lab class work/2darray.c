// introduction to 2 dimensional array.
#include<stdio.h>
int main(){
    int a[2][3];
    int i,j,sum=0;

    printf("enter the elements of 2D array or Matrix\n");
    for(i=0;i<2;i++)      // Outer 'for' loop for the "ROWS"
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
        printf("a[%d][%d] is %d",i,j,a[i][j]);

    }
}
printf("Matrix is \n");
  for(i=0;i<2;i++)      
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
        sum=sum+a[i][j];


    }
    printf("\n");

}
printf("%d",sum);
return 0;
}
