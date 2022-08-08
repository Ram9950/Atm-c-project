#include <stdio.h>
#include <math.h>
int main()
{
    float a[10][10];
    int i, j, r, c;
    printf("enter the number of rows and columns\n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of 2D array is");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    printf("2D array is :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%f\t", a[i][j]);
        }
        printf("\n");
    }

printf("The modified matrix is :\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                printf("%0.2f\t", ceil(a[i][j]));
            }
            else if (i != 0 || j != 0 || i != r - 1 || j != c - 1)
            {
                printf("%0.2f\t", trunc(a[i][j]));
            }
        }
    
    printf("\n");
}
}