#include <stdio.h>
int main()
{
    char c;
    int a, b, d;
    printf("Program to make calculator using switch\n");

    printf("Enter the operator\n");
    scanf("%c", &c);

    printf("Enter two number\n");
    scanf("%d %d", &a, &b);

    switch (c)
    {
    case '+':
        d = a + b;
        break;
    case '-':
        d = a - b;
        break;
    case '*':
        d = a * b;
        break;
    case '/':
        d = a / b;
        break;
    default:
    printf("Please Enter valid input");
        return 0;
        break;
    }
    printf("The required result is %d", d);
    return 0;
}