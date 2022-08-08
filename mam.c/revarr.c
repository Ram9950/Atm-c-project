//without  using another array//
#include<stdio.h>
int main()
{
    int arr[20],n,i,j,temp;
    printf("enter the elements in array :");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d\n",&arr[i]);

    }
    printf("elements before revesing array :\n");

    for(i=0;i<n;i++)
    {
       printf("%d\n",arr[i]);

    }
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
    printf("elements after revesing array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
