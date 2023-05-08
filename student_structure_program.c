#include<stdio.h>

struct students
{
    char name[10];
    int Roll_no;
    int marks;
};
int main()
{
    struct students stu[3];
    //taking details of students
    for (int i = 0; i < 3; i++)
    {
    printf("Enter the student %d detail\n",i+1);
    printf("Enter the name of student\n");
    scanf("%s",&stu[i].name);
    printf("Enter the student Roll no.\n");
    scanf("%d",&stu[i].Roll_no);
    printf("Enter Total marks of Student\n");
    scanf("%d",&stu[i].marks);
    }
    

    //printing details of students
    printf("\nThe students details are as follow :\n");
    for (int j = 0; j < 3; j++)
    {   printf("\nStudent %d\n\n",j+1);
        printf("%s\n",stu[j].name);
        printf("%d\n",stu[j].Roll_no);
        printf("%d\n",stu[j].marks);
    }
    
    return 0;
}