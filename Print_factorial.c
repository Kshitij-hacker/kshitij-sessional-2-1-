#include <stdio.h>

int main()
{
    int fac = 1, num;
    printf("Program to Print Factorial Number\n");
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            fac = 1;
        }
        else
        {
            fac = fac * i;
        }
    }
    printf("%d! = %d", num, fac);
    return 0;
}