#include<stdio.h>
int main()
{
    int cp,sp;
     float profit,loss;
    printf("enter the cost price of product\n");
    scanf("%d",&cp);
printf("Enter the selling price of product\n");
    scanf("%d",&sp);

    if(sp>cp)
    {
profit=sp-cp;
profit=(profit/cp)*100;
        printf("your profit in percentage is %0.2f \n",profit);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
         loss=(loss/cp)*100;
        printf("your loss in percentage is %0.2f \n", loss);

    }
    else
    {
        printf("Neither profit nor loss\n");
    }
return 0;

}