//Write a C program to find the smallest of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("b is the smallest number");
    }else if(b>a){
        printf("a is the smallest number");
    }else if(a==b){
        printf("a and b are equal");
    }
    
}
