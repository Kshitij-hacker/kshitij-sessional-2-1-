#include<stdio.h>
int main()
{
    int num,b=0,remainder,c;
    printf("Program to check Pallidrome Number\n");
    printf("Enter the number\n");
    scanf("%d",&num);

    c=num;
    while (c!=0)
    {
        remainder=c%10;
        c=c/10;
        b=b*10+remainder;
    }
    if (b==num)
    {
        printf("Number is a Pallidrome Number");
    }
    else
    {
        printf("Number is not a Pallidrome Number");
    }
    
}