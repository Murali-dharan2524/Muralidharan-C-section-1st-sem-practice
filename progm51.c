//write a c program to calculate percentage of 6 subject marks
#include<stdio.h>
int main()
{
    float tamil,english,maths,physics,chemistry,biology;
    float percentage;
    printf("marks in tamil=");
    scanf("%f",&tamil);
    printf("marks in english=");
    scanf("%f",&english);
    printf("marks in maths=");
    scanf("%f",&maths);
    printf("marks in physics=");
    scanf("%f",&physics);
    printf("marks in chemistry=");
    scanf("%f",&chemistry);
    printf("marks in biology=");
    scanf("%f",&biology);
    percentage=(tamil+english+maths+physics+chemistry+biology)/6;
    printf("%f",percentage);
    return 0;
}
