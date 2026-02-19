#include<stdio.h>
int main()
{
    double saving;
    double rate= 0.05/ 12;
    double total = 0.0;
    int month;

    printf("Enter the monthly saving amount: $");
    scanf("%lf", &saving);

    for(month= 1; month<= 6; month++)
    {
        total+= saving;
        total*= (1 + rate);   
        printf("After %d month, the total is $%.3f\n", month, total); 
        }
    printf("\nAfter the 6th month, the total is $%.3f\n", total);

    return 0;
}
