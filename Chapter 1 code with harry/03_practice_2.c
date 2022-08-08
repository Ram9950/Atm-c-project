#include <stdio.h>
void main()
{
    int physics, chemistry, mathematics;
    float total;
    printf("enter physics marks\n");
    scanf("%d", &physics);

    printf("enter chemistry marks\n");
    scanf("%d", &chemistry);

    printf("enter mathematics marks\n");
    scanf("%d", &mathematics);

    total = (physics + chemistry + mathematics) / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || mathematics < 33)
    {
      printf(" %f you are fail\n",total);
    }
    else
    {
      printf(" %f you are pass \n",total );
    }
}