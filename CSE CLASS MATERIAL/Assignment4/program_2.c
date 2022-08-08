#include<stdio.h>
struct array
{
    int yard;
    int feet;
    int inches;
};
int main()
{
   int i,j;
   float temp;
   struct array length[5];
   for(i=0;i<5;i++)
   {
       printf("Enter  %d length in yard \n",i+1);
       scanf("%d",&length[i]);
   }
   for(i=0;i<5;i++)
   {
       for(j=0;j <(5-i);j++)
       {
         if(length[j].yard >=length[j+1].yard )
         {
             temp=length[j].yard;
             length[j].yard =length[j+1].yard;
             length[j+1].yard=temp;
         }
       }
   }
    for(i=0;i<5;i++)
    {
        length[i].inches = length[i].yard *36;
        length[i].feet   = length[i].yard *3;
    }

    for(j=0;j<5;j++)
    {
     printf("%d yard =%d feet =%d inches\n",length[j].yard,length[j].feet, length[j].inches);
    }

    return 0;
}