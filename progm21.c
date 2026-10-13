//Write a C program to check whether a given year is a leap year.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0){
        printf("leap year");
    }else if(a%100==0){
        printf("not a leap year");
    }
}
