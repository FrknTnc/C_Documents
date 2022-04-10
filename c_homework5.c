#include <stdio.h>      /* FOR PRE-INCREMENT */
#include <stdlib.h>

int main() /* function main begins program execution */
{
    int n; /* student ranking */
    int counter; /* counter definition */
    int grade; /* student ranking  */
    float avarage; /* average of grades */
    float sum; /* sum of grades */

    n = 1; /* start of student ranking */
    sum = 0; /* start of sum */

    for (counter = 1; counter<=5; ++counter) { /* initialization of counter , repetition condition, and increment of counter */

        printf("Enter grade of student #%d: ", n); /* grade request from user */
        scanf("%d", &grade); /* entering of user's grade */

        switch(grade) { /* switch nested in while */
            case 0 ... 49 : /* grade range status */
                printf("Student #%d's grade is: F\n", n); /* result of grade */
                sum += grade; /* summing the grades */
                break; /* exit switch */
            case 50 ... 59: /* grade range status */
                printf("Student #%d's grade is: E\n", n); /* result of grade */
                sum += grade; /* summing the grades */
                break; /* exit switch */
            case 60 ... 69: /* grade range status */
                printf("Student #%d's grade is: D\n", n); /* result of grade */
                sum += grade; /* summing the grades */
                break; /* exit switch */
            case 70 ... 79: /* grade range status */
                printf("Student #%d's grade is: C\n", n); /* result of grade */
                sum += grade; /* summing the grades */
                break; /* exit switch */
            case 80 ... 89: /* grade range status */
                printf("Student #%d's grade is: B\n", n); /* result of grade */
                sum += grade; /* summing the grades */
                break; /* exit switch */
            case 90 ... 100: /* grade range status */
                printf("Student #%d's grade is: A\n", n); /* result of grade */
                sum += grade; /* summing the grades */
                break; /* exit switch */
            default: /* catch all other characters */
                printf("Wrong format, check the grade again! \n"); /* print for wrong input */
                n -= 1; /* decrease in student rank */
                counter -= 1; /* counter reduction */
                break; /* optional; will exit switch anyway */
        }
        ++n; /* increase student rank */
    }
    avarage = sum/5; /* average calculation */
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("Class avarage (of 5 students) is %.2f", avarage); /* print the average */

    return 0; /* indicate program ended successfully */
}
