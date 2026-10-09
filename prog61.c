#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%400==0 || a%100==0 || a%4==0)
{
printf("it is leap year");
}
else
{
printf("it is not leap year");
}
return 0;
}
