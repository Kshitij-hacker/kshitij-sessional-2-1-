#include <stdio.h>
int main()
{
    int m, n, mat[10][10], a = 0, sum = 0;
    printf("Program to print the sum of diagonal elements\n");
    printf("Enter the number of rows and columns of a matrix\n");
    scanf("%d %d", &n, &m);
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("Enter the %d%d elements of a matrix\n", i, j);
                scanf("%d", &mat[i][j]);
            }
        }
    }
    else
    {
        printf("This is not a square matrix");
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

    // calculating sum

    for (int i = 0; i < n; i++)
    {
        sum = sum + mat[i][i];
        a = a + mat[i][n - i - 1];
    }

    // printing the sum of diagonal elements

    printf("\nThe sum of main diagonal element is %d\n", sum);
    printf("The sum of opposite diagonal is %d\n", a);

    return 0;
}
