//Write a C program to evaluate a + b * c - d / e using operator precedence.
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float total;
    printf("number a=\n");
    scanf("%d",&a);
    printf("number b=\n");
    scanf("%d",&b);
    printf("number c=\n");
    scanf("%d",&c);
    printf("number d=\n");
    scanf("%d",&d);
    printf("number e=\n");
    scanf("%d",&e);
    total=a+b*c-d/e;
    printf("%d\n",total);
    return 0;
    
