/*Print monthly expenditure 
Practical 2, Part 2 (c) 
@Nishchal Ranjitkar
*/

#include<stdio.h>

int main(){
    float foodExpenses= 500.0;     
    float leisureExpenses= 500.0;
    float clothesExpenses= 100.0;
    float accomodationExpenses= 500.0;
    float travelExpenses= 100.0;
    float totalSpent;                   
    totalSpent= foodExpenses+ leisureExpenses+ clothesExpenses+ travelExpenses+ accomodationExpenses; 
    printf("The total expenditure this month was £%.2f\n\n", totalSpent);  

    return 0;
}