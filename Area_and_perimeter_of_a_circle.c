//WAP to find the area and perimeter of circle
#include<stdio.h>

int main(){
    float area , perimeter , value;
    printf("Program to calculate the area and perimeter of a circle\n");
    printf("Enter the value of radius\n");
    scanf("%f",&value);

    area=3.14*(value*value);
    perimeter=3.14*2*value;

    printf("The area is %f\n",area);
    printf("The perimeter is %f\n",perimeter);
    return 0;
}