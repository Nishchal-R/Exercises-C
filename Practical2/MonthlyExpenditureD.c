/*Print monthly expenditure 
Practical 2, Part 2 (c) 
@Nishchal Ranjitkar
*/

#include<stdio.h>

int main(){
    float foodExpenses;     
    float leisureExpenses;
    float clothesExpenses;
    float accomodationExpenses;
    float travelExpenses;
    float totalSpent;                   

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);
    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);
    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);
    printf("Enter accomodation expenses: ");
    scanf("%f", &accomodationExpenses);
    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);
    
    totalSpent= foodExpenses+ leisureExpenses+ clothesExpenses+ travelExpenses+ accomodationExpenses; 
    printf("The total expenditure this month was £%.2f\n\n", totalSpent);  

    return 0;
}