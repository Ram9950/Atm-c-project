#include<stdio.h>
void main()
{
    int a[5],i,j;
    printf("enter the elements of array\n");
    //Reading of arry
    for(i=0; i<5; i++)
    
        scanf("%d",& a[i]);
    //Printing of array
    for(j=0; j<5; j++)
    printf(" a[%d] is %d\n",j,a[j]);
    
}