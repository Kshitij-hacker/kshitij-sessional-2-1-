#include<stdio.h>
int main()
{
    int num,a=0;
    printf("Program to print sum of a series\n");
    printf("Enter the maximum value of series\n");
    scanf("%d",&num);

    for (int i = 1; i <=num; i++)
    {
       a=a+i;
    }
    printf("Sum = %d",a);

    return 0;
}