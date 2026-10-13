//write a c program to calculate the average of the four integer and display the result as a decimal value
#include<stdio.h>
int main()
{
    printf("average of the four integer:");
    int a,b,c,d;
    float average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    average=(a+b+c+d)/4.0;
    printf("%f",average);
    return 0;
}
