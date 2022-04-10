#include <stdio.h>
#include <stdlib.h>


int main()
{
    int grade;
    int counter;
    float total;
    float avarage;

    total = 0;
    counter = 1;

    while (counter < 4) {
        printf("Please Enter Grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }

    if (counter > 0) {

        avarage = total /3;

        printf("Grade Avarage is %.2f\n", avarage);

        if (avarage >=70) {
            printf("Congrulations! ");
        }
        if (avarage <70) {
            printf("Baþarýsýz");
        }
    }
    else
        printf("Grades were not entered \n");


    return 0;

}
