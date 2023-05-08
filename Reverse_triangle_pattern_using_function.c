#include <stdio.h>
void pattern(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("Program to print reverse triangle pattern\n");
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    pattern(rows);

    return 0;
}