#include <stdio.h>
int main()
{
    int num, remainder[10], count = 0;
    printf("Program to convert decimal to binary\n");
    printf("Enter the number to be converted\n");
    scanf("%d", &num);

    for (int i = 0; num > 0; i++)
    {
        remainder[i] = num % 2;
        num = num / 2;
        ++count;
        printf("%d ", num);
    }
    printf("\n");
    for (int j = count - 1; j >= 0; j--)
    {
        printf("%d ", remainder[j]);
    }
    return 0;
}