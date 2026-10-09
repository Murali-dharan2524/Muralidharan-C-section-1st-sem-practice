#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>90 && a<=100)
    {
        printf("A grade");
    }
    else if(a>70 && a<=90)
    {
        printf("B grade");
    }
    else if(a>50 && a<=70)
    {
        printf("C grade");
    }
    else if(a>=0 && a<=50)
    {
        printf("D grade");
    }else
    {
        printf("it is not valid");
    }
    return 0;
}
