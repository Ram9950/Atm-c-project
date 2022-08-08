#include <stdio.h>
void main()
{
    int unit;
    float bill, total, subcharge;
    printf("enter units\n");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        bill = unit * 0.50;
    }
    if (unit <= 150)
    {
        bill = 25 + ((unit - 50) * 0.75);
    }
    if (unit <= 250)
    {
        bill = 100 + ((unit - 150) * 1.20);
    }
    if (unit >= 250)
    {
        bill = 220 + ((unit - 250) * 1.50);
    }
    subcharge = bill * 0.20;
    total = bill + subcharge;
    printf("net bill to be paid is %f\n", total);
}
