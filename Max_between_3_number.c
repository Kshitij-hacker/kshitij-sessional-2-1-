#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Program to print maximum between three Number\n");
    printf("Enter three number\n");
    scanf("%d %d %d", &a, &b,&c);

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("The maximum number is %d", max);
    return 0;
}