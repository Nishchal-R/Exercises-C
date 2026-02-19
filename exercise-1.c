#include <stdio.h>
int main()
{
    double population= 312032486;
    int seconds= 365* 24* 60* 60;
    double birth= seconds/ 7.0;
    double death= seconds/ 13.0;
    double immigrant= seconds/ 45.0;

    double total= birth- death+ immigrant;

    printf("U.S. Population Projection (Next 5 Years)\n");
    printf("Births per year:     %.0f\n", birth);
    printf("Deaths per year:     %.0f\n", death);
    printf("Immigrants per year: %.0f\n", immigrant);
    printf("Net change per year: %.0f\n\n", total);

    int year;
    for (year= 1; year<= 5; year++)
    {
        population+= total;
        printf("Year%d: %.0f\n", year, population);
    }

    return 0;
}