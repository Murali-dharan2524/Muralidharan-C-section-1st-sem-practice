//Write a C program using switch to display the name of a day based on a number from 1 to 7.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case (1):printf("sunday");break;
        case (2):printf("monday");break;
        case (3):printf("tuesday");break;
        case (4):printf("wednesday");break;
        case (5):printf("thrusday");break;
        case (6):printf("friday");break;
        case (7):printf("saturdaY");break;
        default:
        printf("week as contain only 7 days");break;
        
    }
}
