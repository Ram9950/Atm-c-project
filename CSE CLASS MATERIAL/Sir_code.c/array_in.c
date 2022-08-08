#include<stdio.h>
void main()
{
    int a[10];int i, j;
    printf("Enter 5 Elements");
    for(i=0;i<5;i++)
    {       
         scanf("%d",&a[i]);
    }
     
     printf("Inserted Elements are \n");
     for(j=0;j<5;j++)
    { 
       printf ("No.=%d   ==%d\n ",j,a[j]); 
     }
     

}