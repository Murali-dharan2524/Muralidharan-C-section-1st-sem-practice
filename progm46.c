//Write a C program to calculate the final amount after adding a tax percentage.
#include<stdio.h>
int main()
{
    float original_amount;
    float tax_percent;
    float tax_amount;
    float final_amount;
    printf("original amount:");
    scanf("%f",&original_amount);
    printf("tax percent:");
    scanf("%f",&tax_percent);
    tax_amount=(original_amount*tax_percent)/100.0;
    final_amount=original_amount-tax_amount;
    printf("tax amount:%.f\n",tax_amount);
    printf("final amount:%.2f",final_amount);
    return 0;
    
}
