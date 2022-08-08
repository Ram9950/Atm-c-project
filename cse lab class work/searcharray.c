// liner searching in array
#include<stdio.h>
void main(){

int a[5],i,found;
printf("enter the element of array\n");
for (i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Element to search\n");
scanf("%d",&found);
for (i=0;i<5;i++)
{
    if (a[i]==found)
    {
    printf("\nelement found");
    }
    
}
printf("not found");
}