#include <stdio.h>
// recursive function
int fact(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
// main function
int main()
{
    int num;
    printf("Program to find factorial of a number using recursion\n");
    printf("Enter the number of which you want fscctorial\n");
    scanf("%d", &num);

    printf("The factorail is:\n%d", fact(num));

    return 0;
}