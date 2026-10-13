//write a c program to calculate area and perimeter of the rectangle
#include<stdio.h>
int main()
{
    float length,breath;
    scanf("%f\n%f",&length,&breath);
    float perimeter;
    printf("perimeter of the rectangle");
    perimeter=2*(length+breath);
    printf("%f\n",perimeter);
    float area;
    printf("area of the rectangle:");
    area =(length*breath);
    printf("%f\n",area);
    return 0;
}
