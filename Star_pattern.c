#include<stdio.h>
int main()
{
    int rows;
    printf("Program to print star Pattern\n");
    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    for (int i = 0; i <=rows; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        printf(" * ");
       }
       printf("\n");
    }
    
}