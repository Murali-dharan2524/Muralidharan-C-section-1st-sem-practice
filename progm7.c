//Write a C program to calculate the factorial of a given number.
#include<stdio.h>

int main(){
    int n,fact=1;
    scanf("%d", &n);
    for(int i=n;i>0;i--){
        fact*=i;
    }
 printf("%d",fact);
}
