#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], character;
    char s[100];
    char *p1, *p2;

    printf("Enter  original string : \n");
    gets(str);

    printf("\nEnter character that you want to delete : ");
    scanf("%c", &character);

    p1 = str;
    p2 = s;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != character)
        {
            *(p2 + j) = *(p1 + i);
            j++;
        }
    }
    printf("\nNew string after deleting the letter %c : %s\n", character, s);

    return 0;
}