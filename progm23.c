//Write a C program to check whether a number is divisible by both 3 and 5.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("mission successfull");
    }else{
        printf("mission failed");
    }
}
