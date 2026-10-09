#include<stdio.h>
int main()
{
printf("student name : muralidharan\n");
printf("register number:");
int a;char str[456];
scanf("%d",&a);//enter 123
printf("%d\n", a);
printf(" name of the department :");
scanf("\n");
scanf("%[^\n]", str);
printf("%s\n" , str);
 return 0;
 }
