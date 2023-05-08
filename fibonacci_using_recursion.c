#include <stdio.h>

// recursive function
int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}
// main function
int main()
{
    int num;
    printf("Program to print fibonacci series\n");
    printf("Enter the number upto which you want fibonacci series\n");
    scanf("%d", &num);

    printf("The fibonacci series is:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}