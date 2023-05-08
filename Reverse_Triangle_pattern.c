#include <stdio.h>
int main()
{
    int rows;
    printf("Program to Print Reverse Traingle pattern\n");
    printf("Enter how many rows you want to print\n");
    scanf("%d", &rows);

    for (int i = rows; i >0; i--)
    {
        for (int space = 1; space <=rows-i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}