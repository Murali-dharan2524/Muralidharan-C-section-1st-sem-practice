//Write a C program to demonstrate all logical operators using two integer variables.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("number a=");
    scanf("%d",&a);
    printf("number b=");
    scanf("%d",&b);
    printf("number c=");
    scanf("%d",&c);
    printf("%d\n",(a>b)&&(c>b));
    printf("%d\n",(a<c)||(a>b));
    printf("%d\n",!(a>b));
    return 0;
}
