//Write a C program to check whether a student has passed or failed.
#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark>=35 && mark<=100){
       printf("pass"); 
    }else if(mark<35 && mark>=0){
        printf("fail");
    }
}
