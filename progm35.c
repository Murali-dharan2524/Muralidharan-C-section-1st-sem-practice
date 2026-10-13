//Write a C program to evaluate (a + b) * c and compare its result with a + b * c.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int totalS;
    int totalM;
    printf("number a=\n");
    scanf("%d",&a);
    printf("number b=\n");
    scanf("%d",&b);
    printf("number c=\n");
    scanf("%d",&c);
    printf("totalM:\n");
    totalS=(a+b)*c;
    printf("%d\n",totalS);
    printf("total one=\n");
    totalM=a+b*c;
    printf("%d\n",totalM);
    return 0;
    
    
}
