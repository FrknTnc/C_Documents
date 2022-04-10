#include <stdio.h>
#include <stdlib.h>


int main()
{
    int grade, counter;
    float total, avarage;

    total = 0;
    counter = 0;

    printf("Enter Grade, Enter '-1' to end: ");
    scanf("%d", &grade);

    while (grade != -1) {
        total += grade;
        counter++;
        printf("Enter Grade, Enter '-1' to end: ");
        scanf("%d", &grade);
    }
    if (counter >0) {
        avarage = total / counter;
        printf("\nGrade Avarage is %.2f", avarage);

        if (avarage >=70.00) {
            printf("\n\nCongrulations! You passed. ");
        }
        else  {
            printf("\n\nYou did not get a valid average. ");
        }
    }

    else
        printf("\n Grades were not entered");

    return 0;
}
