/*Q.1 To evaluate an arithematic expression x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a) and 
x2=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
input variables in given formula is a,b,c
output is x1,x2.*/


#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,x1,x2;
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);
 x1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
 x2 =(-b-sqrt((b*b)-(4*a*c)))/(2*a);

    printf("the value of x1 is %f\n",x1);
    printf("the value of x2 is %f\n",x2);
}



    