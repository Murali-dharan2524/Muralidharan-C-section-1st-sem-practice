//write c program to calculate the area and circumference of the circle using symbolic constant
#include<stdio.h>
int main()
{
    float radius,perimeter,area;
    scanf("%f",&radius);
    printf("perimeter of the circle :");
    perimeter=2*3.14*radius;
    printf("%f\n",perimeter);
    printf("area of the circle :");
    area=(3.14*radius*radius);
    printf("%f",area);
    return 0;

    
}
