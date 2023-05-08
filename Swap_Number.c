#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Program to Swap Two Number\n");
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);

    printf("\n1st number = %d",num1);
    printf("\n2nd number = %d",num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nFirst Number after swapping = %d", num1);
    printf("\nSecond Number after swapping = %d ", num2);

    return 0;
}