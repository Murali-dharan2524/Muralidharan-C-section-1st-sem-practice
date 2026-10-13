//Write a C program to check whether three given sides can form a triangle.
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
if(a+b>c  && b+c>a && a+c>b){
    printf("triangle can form");

}else if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be greater than 0\n");
    }

}
