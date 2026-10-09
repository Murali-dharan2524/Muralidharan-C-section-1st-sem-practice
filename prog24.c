#include<stdio.h>
int main()
{
float weight,height,bmi;
printf("name of the person:");
char str[456];
scanf("%[^\n]", str);
printf("%s\n",str);
printf("weight of the person:");
scanf("%f",&weight);
printf("%f\n", weight);
printf("height of the person");
scanf("%f", &height);
printf("%f\n", height);
printf("bmi of the person:");
bmi=weight/(height*height);
printf("%f\n", bmi);
printf("address of the person:");
scanf("\n");
char name[345];
scanf("%[^\n]", name);
printf("%s\n",name);
int b;
scanf("%d",&b);
printf("mobile number of the person:%d\n", b);
printf("\t thank you");
return 0;
}




