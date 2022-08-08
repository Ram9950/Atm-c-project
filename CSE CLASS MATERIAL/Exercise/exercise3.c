/* Q.3 Write a C program to calculate the total distance travelled by the 
vechicle in 't' seconds given by :d=ut+1/2(at^2) where d=distance travelled,
u=initial velociy in m/s,a=accleration in m/s^2.
Use scanf() to read values of u,a,t,from the user*/







#include<stdio.h>
int main()
{
    int u,t;
    float a,d;
    printf("intial velocity of vechicle 'u' is \n ");
    scanf("%d", &u );
    printf("value of  'a' is \n ");
    scanf("%f", &a);
    printf("time interval 't' is \n ");
    scanf("%d", &t);
    d=((u*t) +((0.5)*a*t*t));
    printf("distance coverd is %f\n", d);
    return 0;

}



    

