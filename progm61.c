#include<stdio.h>
#include<math.h>

int main(){
    int p,r,t;
    float amount;
    scanf("%d %d %d",  &p,&r,&t);
    amount=p*pow(1+r/100,t);
    printf("%.2f",amount);
}
