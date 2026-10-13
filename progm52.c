//write a c program to calculate simple interest using float variables
#include<stdio.h>
int main()
{
    int p,t;
    float r,interest;
    printf("principle=");
    scanf("%d",&p);
    printf("time:");
    scanf("%d",&t);
    printf("rate of interest=");
    scanf("%f",&r);
    printf("simple interest");
    interest=(p*r*t)/100;
    printf("%f",interest);
    return 0;
    
    
}
