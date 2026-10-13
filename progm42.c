//Write a C program to demonstrate all relational operators using two integer variables.
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("number a=");
    scanf("%d",&a);
    printf("number b=");
    scanf("%d",&b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a<=b);
    printf("%d\n",a>=b);
    return 0;
}
