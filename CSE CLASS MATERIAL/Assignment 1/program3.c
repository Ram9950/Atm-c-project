//Write a  C program to implement simple calculater using switch case.//
#include<stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter your choice number\n");
    printf("1. addition(+)\n  2. subtraction(-)\n 3. multiplication(*)\n 4.division(/)\n ");
    scanf("%d",&choice);

    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);

    switch (choice)
    {
    case 1:
             printf("addition of numbers %d\n",a+b);
             break;
             case 2:
             printf("subtraction of numbers %d\n",a-b);
             break;

            case 3:
             printf("multiplication of numbers %d\n",a*b);
             break;
case 4:
             printf("division of numbers %d\n",a/b);
             break;
             default:
             printf("you entered a wrong choice");
    } 
    return 0;
}



    


