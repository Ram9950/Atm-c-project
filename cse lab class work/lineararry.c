#include<stdio.h>
int main()
{
    int a[5],i,element;
    printf("enter the elements of array\n");
    for(i=0;i<5;i++){

    
    scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&element);
    for(i=0;i<5;i++)
    {
        if (a[i]==element)

        {
        printf("%d is found at position %d",element,i);
        return 0;
    }

    }
    printf("%d is not found ",element);
return 0;



}
