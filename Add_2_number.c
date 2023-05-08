// WAP to add two numbers
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Program to add two Number\n");

    printf("Enter two number\n");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("The sum is %d", sum);
    return 0;
}