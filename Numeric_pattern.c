#include <stdio.h>
int main()
{
    int rows, a, b;
    printf("Program to print numeric pattern\n");
    printf("Enter how many rows you want to print\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        a = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            ++a;
        }
        b = 2 * i - 2;
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d", b);
            --b;
        }

        printf("\n");
    }
    return 0;
}