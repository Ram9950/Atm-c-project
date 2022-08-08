#include<stdio.h>
int main()
{
    float x[5],sum=0.0,avg;
    int i;
    float *px,*psum,*pavg;
    px=&x[0];   // px=&x
    psum=&sum, pavg=&avg;
    printf("enter array numbers :\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",(px+i));
        *psum+=*(px+i);
    }
*pavg=*psum/5;
printf("sum=%.2f\t ,average=%.2f\n",*psum,*pavg);
return 0;


}