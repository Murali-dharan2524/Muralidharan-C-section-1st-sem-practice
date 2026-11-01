#include<stdio.h>

int main(){
    float si,p,r,t;
    scanf("%f %f %f",&p,&si,&t);
    r=(si*100)/(p*t);
    printf("%.2f",r);
}
