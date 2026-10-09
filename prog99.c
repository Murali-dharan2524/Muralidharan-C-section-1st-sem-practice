#include<stdio.h>
int main()
{
printf("name of the student:");
char str[456];
scanf("%[^\n]", str);
printf("%s\n", str);
printf("register number:");
int a;
scanf("%d", &a);
printf("%d\n", a);
printf("name of the department:");
char name[456];
scanf("%[^\n]", name);
printf("%s\n", name);
printf("mobile number:");
int b;
scanf("%d",&b);
printf("%d\n", b);
float c;
scanf("%f",&c);
printf("%f\n",c);
scanf("\n");
return 0;
}






