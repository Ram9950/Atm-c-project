/* Q.3 Write a program to determine whether a number is divisible by 97
or not*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("divisibility test returns %d\n", num % 97);

    // Q.4 Step by Step evalution of 3*x/y-z+k
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    /* (3*x)/y=6/3=2
    2-z+k=(2-z)+k= -1+1=0*/

    return 0;
}
