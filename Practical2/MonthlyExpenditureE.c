/*Print monthly expenditure 
Practical 2, Part 3 (3) 
@Nishchal Ranjitkar
*/

#include<stdio.h>

int main(){
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;
    const int accomodation = 500; 

    while(1){
        printf("Enter food expenses: ");
        if(scanf("%f", &foodExpenses)== 1 && foodExpenses>= 0){
            break;
        }else{
            printf("Invalid input. Please enter a positive number.\n");
            while(getchar()!='\n'); 
        }
    }

    while(1){
        printf("Enter leisure expenses: ");
        if(scanf("%f", &leisureExpenses)== 1 && leisureExpenses>= 0){
            break;
        }else{
            printf("Invalid input. Please enter a positive number.\n");
            while(getchar()!= '\n'); 
        }
    }

    while(1){
        printf("Enter clothes expenses: ");
        if(scanf("%f", &clothesExpenses)== 1 && clothesExpenses>= 0){
            break;
        }else{
            printf("Invalid input. Please enter a positive number.\n");
            while(getchar()!= '\n'); 
        }
    }

    while(1){
        printf("Enter travel expenses: ");
        if(scanf("%f", &travelExpenses)== 1 && travelExpenses>= 0){
            break;
        }else{
            printf("Invalid input. Please enter a positive number.\n");
            while(getchar()!= '\n'); 
        }
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accomodation + travelExpenses;

    printf("\n--------------------------\n");
    printf("The total expenditure this month was £%.2f\n", totalSpent);
    printf("----------------------------\n");

    return 0;
}