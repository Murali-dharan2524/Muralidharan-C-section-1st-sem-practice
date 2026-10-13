//Write a C program to print all even numbers between 1 and n.
#include<stdio.h>

int main(){
    int n;scanf("%d", &n);
    for(int i=2;i<=n;i+=2){
        printf("%d", i);
        printf("\n");
    }
    
}
