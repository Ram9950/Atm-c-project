#include<stdio.h>
struct ratio
{
   int a,b,c;
};
int main()
{ 
    float number;
  struct ratio num;

  scanf("%d%d%d",&num.a,&num.b,&num.c);
  printf("a=%d  b=%d   c=%d",num.a,num.b,num.c);
  if(num.b >num.c)
  {
    number = num.a/(num.b-num.c);
      printf("ratio is %f \n",number);

  }
  else
  printf("ratio not possible");

}