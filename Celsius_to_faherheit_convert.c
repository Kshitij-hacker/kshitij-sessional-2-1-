// WAP to convert celius to fahrenheit to celsius
//Ayush Garg
#include <stdio.h>
int main()
{
    int choice, temp, celsius, fahrenheit;
    printf("Program to convert degree celsius to degree fahrenheit\n");
    printf("Enter 1 for celsius and 2 for fahrenheit\n");
    scanf("%d", &choice);
    printf("Enter the temperature\n");
    scanf("%d", &temp);

    if (choice == 1)
    {
        fahrenheit = (temp * (9 / 5)) + 32;
        printf("%d degree fahrenheit\n", fahrenheit);
    }

    else if (choice == 2)
    {
        celsius = (temp - 32) * (5 / 9);
        printf("%d degree celsius\n", celsius);
    }
    else
    {
        printf("Enter valid input");
    }
    return 0;
}