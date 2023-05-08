#include <stdio.h>
int main()
{
    int m, n, mat[10][10];
    printf("Program to print the upper and lower triangle of a matrix\n");
    printf("Enter the number of rows and columns of a matrix\n");
    scanf("%d %d", &n, &m);

    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("Enter the %d%d element of a matrix\n", i, j);
                scanf("%d", &mat[i][j]);
            }
        }
    }
    else
    {
        printf("Enter the valid square matrix");
    }

    // printing the user entered matrix
    printf("Your entered matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // printing the upper and lower traingle
    printf("The Lower triangular matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i >= j)
            {
                printf("%d", mat[i][j]);
                printf("\t");
            }
            else
            {
                printf("0");
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("The Upper triangular matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i <= j)
            {
                printf("%d", mat[i][j]);
                printf("\t");
            }
            else
            {
                printf("0");
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}