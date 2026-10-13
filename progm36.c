//Write a C program to evaluate a + b * c and explain the effect of operator precedence through the program.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int total;
    printf("number a=\n");
    scanf("%d",&a);
    printf("number b=\n");
    scanf("%d",&b);
    printf("number c=\n");
    scanf("%d",&c);
    //at first precedence should be for multiplication and then second prefedence should be for addition
    total=a+b*c;
    printf("%d",total);
    return 0;
    
    
}
