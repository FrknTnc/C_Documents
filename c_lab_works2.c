#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float amount, percentage;
    int year, threshold, population, sumYear;


    printf("Enter the population: \n ");
    scanf("%d", &population);

    printf("Enter the percentage: \n ");
    scanf("%f", &percentage);

    printf("Enter the threshold: \n ");
    scanf("%d", &threshold);

    year = 1;
    sumYear = 0;

    while(population <= threshold) {
        amount = (population*percentage)/100;
        population = round(population + amount);
        printf("amount of increase: %.2f ", amount);
        printf("Population after %d. year: %d \n", year, population);
        year += 1;
        sumYear += 1;

    }
    printf("Year: %d", sumYear);


    return 0;
}
