// reverse array  using another array//
#include<stdio.h>
int main()
{
    int arr[20],revarr[20],n,i,j,temp;
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
    for(j=(n-1),j=0;i>=0;i--,j++)
    {
       revarr[j]=arr[i];
    }
    printf("elements after revesing array :\n");
    

for(i=0;i<n;i++)
{
    printf("%d\n",revarr[i]);
}
}