#include<stdio.h>

int main(){
    float bill,finalbill,t,units,fixed,rate;
    scanf("%f %f %f %f",&units,&rate,&fixed,&t);
    bill=(units*rate)+fixed;
    finalbill=bill*(1+t/100);
    printf("%.2f",finalbill);
}
