#include<stdio.h>

int main(){
    float celsius,f,k;
    scanf("%f",&celsius);
    f=(celsius*9.0/5.0)+32.0;
    k=celsius + 273.15;
    printf("%.2f\n", f);
    printf("%.2f",k);
    
}
