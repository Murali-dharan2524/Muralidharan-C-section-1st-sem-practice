#include<stdio.h>
int main()
{
    int a,b,choice;
    scanf("%d%d%d",&choice,&a,&b);
    switch(choice)
    {
     case 1:
        printf("%d", a+b);
        break;
    case 2:
        printf("%d", a-b);
        break;
    case 3:
        printf("%d", a*b);
        break;
    case 4:
        printf("%d", a/b);
        break;
    case 5:
        printf("%d", a%b);
        break;
    default:
        printf("it is not valid");
    }
}
