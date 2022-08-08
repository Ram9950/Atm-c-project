#include<stdio.h>
int main()
{
    int a[20], b[20], c[40], n1, n2, i, j, temp,k=0;
    printf("number of element in 1st array :");
    scanf("%d", &n1);

    printf("first array is :");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        c[k]=a[i];
        k++;
    }
    printf("\nnumber of element in 2nd array :");
    scanf("%d", &n2);

    printf("second arry is:");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        c[k]=b[i];
        k++;

    }
    printf("\nfirst sorted array :");
    for (i = 0; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nsecond sorted array :");
    for (i = 0; i < n2; i++)
    {
        for (j = i + 1; j < n2; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < n2; i++)
    {
        printf("%d ", b[i]);
    }
    for (i = 0; i < (n1+n2); i++)
    {
        for (j = i + 1; j < (n1+n2); j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\nsorted array c is :");
    

    for (i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}