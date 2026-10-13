//Write a C program to calculate the sum of all even numbers between 1 and n.
#include<stdio.h>
int main()
{
int n,sum=0;
scanf("%d",&n);
for (int i=0;i<=n;i++){
    if (i%2==0){
        sum=sum+i;
    }
}
printf("\n%d",sum);
}
