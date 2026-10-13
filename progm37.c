//Write a C program to demonstrate compound assignment operators.
#include<stdio.h>
int main()
{
    printf("number a=");
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    a+=a;
    printf("%d\n",a);
     a/=a;
    printf("%d\n",a);
    a-=a;
    printf("%d\n",a);
    a*=a;
    printf("%d\n",a);
    return 0;
}
