#include <stdio.h>
int main()
{
    int num1, num2, b, i, j;
    printf("Program to print Prime number in a given range\n");
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    for (i = num1 + 1; i < num2; ++i)
    {
        b = 0;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                b = 1;
                break;
            }
        }
        if (b == 0)
            printf("%d ", i);
    }
    return 0;
}