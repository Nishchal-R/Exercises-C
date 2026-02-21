#include<stdio.h>

int main(){
    float foodExpenses= 500.0;     
    float leisureExpenses= 500.0;
    float clothesExpenses= 100.0;
    float totalSpent;                   
    totalSpent= foodExpenses+ leisureExpenses+ clothesExpenses; 
    printf("The total expenditure this month was £%.2f\n\n", totalSpent);  

    return 0;
}