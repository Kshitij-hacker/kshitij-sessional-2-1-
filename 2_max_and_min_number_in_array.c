#include <stdio.h>
int main()
{
    int array[10], max, min, c, d, e;
    printf("Program to print two minimum and two maximum of an array\n");
    // taking input from user
    printf("Enter the 10 elements of an array\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    // printing the user entered array
    printf("Your entered array is :\n");

    for (int j = 0; j < 10; j++)
    {
        printf("%d ", array[j]);
    }

    // calculating maximum and minimum of array
    for (int i = 1; i < 3; i++)
    {
        max = array[0];
        min = array[0];
        for (int j = 0; j < 10; j++)
        {
            if (array[j] > max)
            {
                max = array[j];
                c = j;
            }
            if (array[j] <= min)
            {
                min = array[j];
                e = j;
            }
        }

        printf("\nThe %d maximum value is : %d", i, max);
        printf("\nThe %d minimum value is : %d", i, min);
        array[c] = array[e] + min ;
        array[e] = array[c];
    }
    return 0;
}