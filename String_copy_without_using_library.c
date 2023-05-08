#include <stdio.h>
int main()
{
    char a[30], b[30], i;
    printf("Program to copy string without using library function\n");
    printf("Enter the string to be copied\n");
    fgets(a, sizeof(a), stdin);

    printf("Entered string is : ");
    puts(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("The copied string is : ");
    puts(b);
    return 0;
}