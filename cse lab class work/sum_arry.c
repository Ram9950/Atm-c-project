#include<stdio.h>
void main(){
    int marks[5],i,j;
    float sum,average;
    printf("Enter elements\n");
    for (i=0;i<5;i++)
    {
    scanf("%d",&marks[i]);}
    
    
    for(j=0;j<5;j++)
{
    sum=sum+marks[j];
    average=sum/5;
    


}
printf("sum=%0.2f\n",sum);
printf("average=%0.2f\n",average);
}

