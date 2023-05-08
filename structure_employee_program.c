#include <stdio.h>
struct employee
{
    char name[30];
    long emp_id;
    int salary;
};

int main()
{
    struct employee e[50];
    printf("Program to input details of 50 employee and print them\n");
    // input the details of employee
    for (int i = 0; i < 50; i++)
    {
        printf("Enter the details of %d employee\n", i + 1);
        printf("Enter the name of employee\n");
        scanf("%s", &e[i].name);
        printf("Enter the id of employee\n");
        scanf("%ld", &e[i].emp_id);
        printf("Enter the salary of employee\n");
        scanf("%d", &e[i].salary);
    }
    // printing the employee details
    for (int i = 0; i < 50; i++)
    {
        printf("\nThe details of %d employee is: \n", i + 1);
        printf("Name : %s\n", e[i].name);
        printf("Employee ID: %ld\n", e[i].emp_id);
        printf("Salary : %d\n", e[i].salary);
    }
    return 0;
}