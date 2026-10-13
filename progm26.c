//Write a C program to check whether a person is eligible to vote.
#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible");
    }else{
        printf("you are not eligible");
    }
}
