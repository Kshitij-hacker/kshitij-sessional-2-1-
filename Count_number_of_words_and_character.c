#include <stdio.h>
int main()
{
    char str[30];
    int c = 0, words = 1;
    printf("Program to count number of words and character in string\n");
    printf("Enter the string\n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        c++;
        if (str[i] == ' ')
        {
            words++;
        }
    }
    printf("\nThe number of character in a string is : %d\n", c);
    printf("The number of words in a string is : %d", words);
    return 0;
}