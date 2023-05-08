#include <stdio.h>
// gcd recursive function
int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }
    else if (num2 == 0)
    {
        return num1;
    }
    else if (num1 == num2)
    {
        return num1;
    }
    else if (num1 > num2)
    {
        return gcd(num1 - num2, num2);
    }
    else if (num1 < num2)
    {
        return gcd(num1, num2 - num1);
    }
}
// lcm recursive function
int lcm(int num1, int num2)
{
    static int temp = 1;
    if (temp % num1 == 0 && temp % num2 == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(num1, num2);
        return temp;
    }
}
// main function
int main()
{
    int num1, num2, choice = 0;

    printf("Progarm to find LCM and HCF of a number\n");
    printf("Press 1 for LCM\nPress 2 for HCF\nPress 3 for both\n");
    scanf("%d", &choice);

    printf("Enter two Number\n");
    scanf("%d %d", &num1, &num2);
    switch (choice)
    {
    case 1:
        printf("\nThe LCM is : %d", lcm(num1, num2));
        break;

    case 2:
        printf("\nThe GCD is : %d", gcd(num1, num2));
        break;

    case 3:
        printf("\nThe GCD is : %d", gcd(num1, num2));
        printf("\nThe LCM is : %d", lcm(num1, num2));
        break;

    default:
        printf("Enter valid choice");
        break;
    }

    return 0;
}