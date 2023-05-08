#include <stdio.h>
int main()
{
    int num,a=0;
    printf("Program to check prime number\n");
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            a++;
        }
    }
    if (a == 2)
    {  
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
    return 0;
}
