//Write a C program to calculate the total bill after applying a discount percentage.
#include<stdio.h>
int main()
{
    float original_amount;
    float discount_percent;
    float discount_amount;
    float final_amount;
    printf("original amount:");
    scanf("%f",&original_amount);
    printf("discount percent:");
    scanf("%f",&discount_percent);
    discount_amount=(original_amount*discount_percent)/100.0;
    final_amount=original_amount-discount_amount;
    printf("\nDiscount Amount: %.2f\n", discount_amount);
    printf("Total Bill After Discount: %.2f\n", final_amount);
    return 0;

    
}
