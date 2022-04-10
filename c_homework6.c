/* Homework #1 192010010011 Furkan Ali Tunç */

/* Average Calculation only with <<if else>> statements */

#include <stdio.h>
#include <stdlib.h>

/* main function starts running */
int main()
{
    int grade1, grade2, grade3; /* values of grades */
    int counter; /* number of entered grades */
    float total; /* sum of entered grades */
    float average; /* average of grades */

    /* initialization phase */
    counter = 0; /* starting counter */

    /* data collection phase */
    if (counter>=0) { /* counter condition */
        printf("Print Grade(0-100):"); /*request for input */
        scanf("%d", &grade1); /* read entered grade */
        total = total + grade1; /* adding the grade to the total */
        counter=1; /* number of counter */

        if (counter>=1) { /* counter condition */
            printf("Print Grade(0-100):"); /*request for input */
            scanf("%d", &grade2); /* read entered grade */
            total= total + grade2; /* adding the grade to the total */
            counter=2; /* number of counter */

            if (counter>=2) { /* counter condition */
                printf("Print Grade(0-100):"); /*request for input */
                scanf("%d", &grade3); /* read entered grade */
                total = total + grade3; /* adding the grade to the total */
            }
        }
    }
    average = total / 3; /* averaging grades */

    printf("\nGrade 1: %d", grade1); /* printing the grade */
    printf("\nGrade 2: %d", grade2); /* printing the grade */
    printf("\nGrade 3: %d", grade3); /* printing the grade */
    printf("\nGrade Average is %.2f\n", average); /* printing the average */

    if (average >=70.00) { /* average condition */
        printf("\nCongrulations! You passed. "); /* output of the average result */
    }
    else { /* average condition */
        printf("\nYou did not get a valid average. "); /* output of the average result */
    }
    return 0; /* indicate a successful ended */

} /* end of main function */



///* Average Calculation with sentinel while statement */
//
//#include <stdio.h>
//#include <stdlib.h>
//
// /* main function starts running */
//int main()
//{
//    int grade; /* value of grade */
//    int counter; /* number of entered grades */
//    float total; /* sum of entered grades */
//    float average; /* average of grades */
//
//    total = 0; /* starting total */
//    counter = 0; /* starting counter */
//
//    printf("Enter Grade, Enter '-1' to end: "); /*request for input */
//    scanf("%d", &grade); /* read entered grade */
//
//    /* loop while without getting sentinel value */
//    while (grade != -1) {
//        total += grade; /* adding the grade to the total */
//        counter++; /* increment of counter */
//        printf("Enter Grade, Enter '-1' to end: "); /*request for input */
//        scanf("%d", &grade); /* read entered grade */
//    }
//    /* termination phase */
//    /* if the user entered a minimum of one grade */
//    if (counter >0) {
//        average = total / counter; /* averaging grades */
//        printf("\nGrade Average is %.2f", average); /* printing the average */
//
//        if (average >=70.00) { /* average condition */
//            printf("\n\nCongrulations! You passed. "); /* output of the average result */
//        }
//        else  { /* average condition */
//            printf("\n\nYou did not get a valid average. "); /* output of the average result */
//        }
//    }
//
//    else /* message to print if no notes are entered */
//        printf("\n Grades were not entered");
//
//    return 0; /* indicate a successful ended */
//} /* end of main function */



// /* Average Calculation with while statement without <<sentinel>> */
//
//#include <stdio.h>
//#include <stdlib.h>
//
//  /* main function starts running */
//int main()
//{
//    int grade; /* value of grade */
//    int counter; /* number of entered grades */
//    float total; /* sum of entered grades */
//    float average; /* average of grades */
//
//    total = 0; /* starting total */
//    counter = 1; /* starting counter */
//
//    /* while loop according to the specified counter */
//    while (counter < 4) {
//        printf("Please Enter Grade(0-100): "); /*request for input */
//        scanf("%d", &grade); /* read entered grade */
//        total += grade; /* adding the grade to the total */
//        counter++; /* increment of counter */
//    }
//
//    /* termination phase */
//    /* if the user entered a minimum of one grade */
//    if (counter > 0) {
//        average = total /3; /* averaging grades */
//        printf("Grade Average is %.2f\n", average); /* printing the average */
//
//        if (average >=70.00) { /* average condition */
//            printf("\nCongrulations! You passed. "); /* output of the average result */
//        }
//        else  { /* average condition */
//            printf("\nYou did not get a valid average. "); /* output of the average result */
//        }
//    }
//    else /* message to print if no notes are entered */
//        printf("Grades were not entered \n");
//
//    return 0; /* indicate a successful ended */
//} /* end of main function */
