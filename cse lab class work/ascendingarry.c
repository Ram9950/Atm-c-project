#include<stdio.h>
int main(){
    int num[20];
    int i,j,n,temp;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++){
         if(num[i]>num[j]){

           //swapping element[i] with element[j]
            temp=num[i]; 
            num[i]=num[j];
            num[j]=temp;
         }
      }
   }
   printf("Elements are now in ascending order:");
   for(i=0;i<n;i++)
      printf("%d\n",num[i]);
   return 0;
}

    


