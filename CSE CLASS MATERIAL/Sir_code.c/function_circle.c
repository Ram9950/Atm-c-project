#include<stdio.h>
#define PI 3.14
float dia(float r);
float cir(float r);
float area(float r);
void main()
{
   dia(10.2);
   cir(10.3);
   area(3);
}

float dia(float r)
{
    float dia;
    dia=2*r;
    printf("Diameter of Circle=%0.2f",dia);
}
float cir(float r)
{
    float cirm;
    cirm=2*PI*r;
      printf("Circumfrence of Circle=%0.3f",cirm);
}
float area(float r)
{
    float a;
    a=PI*r*r;
      printf("Area of Circle=%f",a);  //FCI=PA*(1+r/100)Pow Year
                                       //CI=FCA-PA;
}