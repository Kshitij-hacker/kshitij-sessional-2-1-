#include <stdio.h>
int main()
{
    int n, m, mat[10][10], transpose[10][10];
    printf("Program to tranpose a matrix\n");
    printf("Enter the number of rows and columns of a matrix\n");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d%d elements of a matrix\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // printing the matrix

    printf("Your Entered Matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // tranposing a matrix

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

    // printng transpose
    printf("\nThe transpose of a matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}