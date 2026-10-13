#include<stdio.h>
int main()
{
    printf("number of the copies sold:");
    float x;
    scanf("%f",&x);
    printf("%f\n", x);
    printf("price of the single newspaper:");
    float y;
    scanf("%f",&y);
    printf("%f\n", y);
    printf("cost of the investment for one paper:");
    float z;
    scanf("%f",&z);
    printf("%f\n", z);
    printf("rent of the sunday:");
    float a;
    scanf("%f",&a);
    printf("%f\n", a);
    printf("profit:");
    float profit;
    profit=((x*y)-(x*z)-a);
    printf("%f", profit);
    return 0;
}
