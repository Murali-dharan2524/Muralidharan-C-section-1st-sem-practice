//Write a C program to calculate the sum of the first n natural numbers.
#include<stdio.h>

int main(){
    int n,sum;
    scanf("%d", &n);
    sum=(n*(n+1))/2;
    printf("%d", sum);
}
