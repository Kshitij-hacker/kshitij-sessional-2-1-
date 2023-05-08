#include <stdio.h>
void prime(int num)
{
    int a, count = 0;
    for (int i = 1; i <= num; i++)
    {
        a = i;
        if (num % a == 0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("The entered number is a prime number");
    }
    else
    {
        printf("The entered number is not a prime number");
    }
}
int main()
{
    int num;
    printf("Program to check prime number using function\n");
    printf("Enter the number to check prime number\n");
    scanf("%d", &num);

    prime(num);

    return 0;
}