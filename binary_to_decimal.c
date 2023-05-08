#include <stdio.h>
int main()
{
    long long num;
    int remainder, decimal = 0, base = 1;
    printf("Program to convert binary to decimal\n");
    printf("Enter the binary number\n");
    scanf("%lld", &num);

    for (int i = 0; num != 0; i++)
    {
        remainder = num % 10;
        decimal = decimal + remainder * base;
        num = num / 10;
        base = base * 2;
    }
    printf("Decimal value is : %d", decimal);
    return 0;
}