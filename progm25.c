//Write a C program to calculate a student's grade based on m
#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark>=80 && mark<=100){
        printf("grade A");
    }else if(mark>=60){
        printf("grade B");
    }else if(mark>=40 && mark>=0){
        printf("grade C");
    }else
{ 
printf("it is not valid");
}
}
