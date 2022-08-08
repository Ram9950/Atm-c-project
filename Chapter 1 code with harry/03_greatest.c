// Write a program to find greatest of four numbers enterd by user
#include <stdio.h>
void main()
{
  int a, b, c, d, greatest;
  printf("enter any four numbers\n");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if ((a > b) && (a > c) && (a > d))
  {
    printf("%d  is greatest");
  }
  else if ((b > a) && (b > c) && (b > d))
  {
    printf("%d is greatest");
  }

  else if ((c > a) && (c > b) && (c > d))
  {
    printf("%d is greatest");
  }

  else if ((d > a) && (d > b) && (d > c))
  {
    printf("%d is greatest");
  }
}
