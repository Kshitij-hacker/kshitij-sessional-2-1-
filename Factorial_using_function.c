#include <stdio.h>
int fact(int num)
{
    if (num != 0)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    printf("Program to print the factorial using function\n");
    printf("Enter the number of which you want factorial\n");
    scanf("%d", &num);

    printf("The factorial is : %d", fact(num));

    return 0;
}