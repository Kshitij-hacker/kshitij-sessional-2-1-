#include <stdio.h>
int main()
{
    int choice;
    int mat1[2][2], mat2[2][2],sum1[2][2]={0};
    int matr1[3][3],matr2[3][3],sum2[3][3]={0};
    printf("Program to Find the sum of a matrix\n");
    // scanning the elements of first matrix

    printf("Press 1 for 2 by 2 matrix\nPress 2 for 3 by 3 matrix\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the elements of a First Matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d%d element of a matrix\n", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    // scanning the elements of 2nd matrix
    printf("\nEnter the elements of second matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d%d element of a matrix\n", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    // sum of a matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum1[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n");
    // printing the sum
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", sum1[i][j]);
        }
        printf("\n");
    }
    return 0;
        break;
    
    case 2:
        printf("Enter the elements of a First Matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d%d element of a matrix\n", i, j);
            scanf("%d", &matr1[i][j]);
        }
    }
    // scanning the elements of 2nd matrix
    printf("\nEnter the elements of second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d%d element of a matrix\n", i, j);
            scanf("%d", &matr2[i][j]);
        }
    }
    // sum of a matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum2[i][j] = matr1[i][j] + matr2[i][j];
        }
    }
    printf("\n");
    // printing the sum
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", sum2[i][j]);
        }
        printf("\n");
    }
    return 0;
        break;
    
    }
    
}