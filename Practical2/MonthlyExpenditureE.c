/*Print monthly expenditure 
Practical 2, Part 2 (e) 
@Nishchal Ranjitkar
*/

#include<stdio.h>

int main(){
    float foodExpenses;     
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;                   

    const int accomodation= 500;

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);
    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);
    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);
    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);
    
    totalSpent= foodExpenses+ leisureExpenses+ clothesExpenses+ travelExpenses+ accomodation; 
    printf("The total expenditure this month was £%.2f\n\n", totalSpent);  

    return 0;
}