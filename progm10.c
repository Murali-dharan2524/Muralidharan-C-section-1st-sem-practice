/Write a C program to print all odd numbers between 1 and n.
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            printf("%d", i);
            printf("\n");
        }
    }
}
