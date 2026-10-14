//57.Read a 4-digit number and print the sum of its digits (use / and %).
//Sample: 4821 → 15
#include<stdio.h>

int main(){
   int a;
   scanf("%d", &a);
   printf("%d",( a/1000 + (a/100)%10 + (a/10)%10 + a%10));
   return 0;
}
