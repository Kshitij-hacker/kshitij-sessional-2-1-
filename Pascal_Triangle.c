#include <stdio.h>
int main()
{
    int rows, coef = 1;
    printf("Enter how many rows you want to print\n");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ",coef);
        }

        printf("\n");
    }
    return 0;
}