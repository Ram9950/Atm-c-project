/* revesre array without swapping */
#include<stdio.h>
void main()
{
    int arr[20],n,i;
    printf("enter the elements in array :");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);

    }
    printf("elments of array before reverse\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",arr[i]);

    }
    printf("elements after reversing array is :\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    
    
    

}