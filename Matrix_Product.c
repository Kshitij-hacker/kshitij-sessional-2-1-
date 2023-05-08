#include <stdio.h>
int main()
{
    int a, b, c, d, mul[10][10] = {0};
    int frt[10][10], scd[10][10];
    printf("Program to Multiply two matrix\n");
    printf("Enter the no. of rows and column of first matrix\n");
    scanf("%d %d", &b, &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the %d %d elements of matrix", i, j);
            scanf("%d", &frt[i][j]);
        }
    }
    printf("Enter the no. of rows and column of second matrix\n");
    scanf("%d %d", &d, &c);

    if (b != c)
    {
        printf("Multiplication cannot occur");
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("Enter the %d %d elements of matrix", i, j);
                scanf("%d", &scd[i][j]);
            }
        }
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < d; k++)
                {
                    mul[i][j] += frt[i][j] + scd[j][k];
                }
            }
        }
        printf("Multiplication is\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
}