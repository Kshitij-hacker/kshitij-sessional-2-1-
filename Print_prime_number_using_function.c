#include <stdio.h>
int prime(int num1, int num2)
{
    int count = 0, a;
    for (int i = num1; i <= num2; i++)
    {
        count = 0;
        a = i;
        for (int j = 1; j <= num2; j++)
        {
            if (a % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int num1, num2;
    printf("Program to print prime number between a given range\n");
    printf("Enter the range\nfrom\n");
    scanf("%d", &num1);
    printf("To\n");
    scanf("%d", &num2);

    printf("The prime number between %d and %d is :\n", num1, num2);
    prime(num1, num2);

    return 0;
}