#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    float r1,r2;
    r1=(-b+sqrt(d))/(2.0*a);
    r2=(-b-sqrt(d))/(2.0*a);
    if(r1>r2){
        printf("%.2f",r1);
        printf("%.2f",r2);
    }else{
        printf("%.2f",r2);
        printf("%.2f",r1);
    }
}
