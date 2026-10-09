#include<stdio.h>
int main()
{
printf("name of the student:");
char str[156];
scanf("%[^\n]",str);
printf("%s\n",str);
int a;
printf("register number:");
scanf("%d",&a);
printf("%d\n", a);
printf("name of the school:");
scanf("\n");
char name[456];
scanf("%[^\n]",name);
printf("%s\n",name);
float tamil;
printf("marks in tamil=\n");
scanf("%f",&tamil);
float english;
printf("marks in english=\n");
scanf("%f",&english);
float maths;
printf("marks in maths=\n");
scanf("%f",&maths);
float physics;
printf("marks in physics=\n");
scanf("%f",&physics);
float chemistry;
printf("marks in chemistry=\n");
scanf("%f",&chemistry);
float biology;
printf("marks in biology=\n");
scanf("%f",&biology);
printf("percentage=");
float percentage;
percentage=(tamil+english+maths+physics+chemistry+biology)/6.0;
printf("%f\n",percentage);
return 0;
}





