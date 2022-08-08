#include<stdio.h>
void main(){
      int a[5],i;
      int even=0,odd=0;
      printf("enter the array  elements:\n");
      for (i=0;i<5;i++)
      {

      
      scanf("%d",&a[i]);
      
          if (a[i]%2==0)
          even++;
          else
          odd++;



      }
      printf("total even numbers are %d\n",even);
      printf("total odd numbers are %d\n",odd);

}