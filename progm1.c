#include<stdio.h>

int main(){
    int n;
    int i = 1; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do {
        printf("%d ", i);
        i = i + 1; 
    } while (i <= n); 
    printf("\n"); 
    return 0;
}
}
