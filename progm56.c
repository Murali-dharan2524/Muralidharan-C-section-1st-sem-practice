//Read a number of days and print it as weeks and remaining days.
//Sample: 45 → 6 weeks 3 days
#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf("%d weeks  ", a/7);
    printf("%d days", a%7);
    return 0;
}
