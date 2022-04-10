//  Furkan Ali Tunc 192010010011 //

#include <stdio.h>
#define MAXCRS 3
#define MAXCAMPUS 2

void ders_kayitStudents(int arr[MAXCRS][MAXCAMPUS][4]); /* function to get inputs */
void displayNoStudentsInEachCourse(const int arr[MAXCRS][MAXCAMPUS][4]); /* course summation function */
void displayNoStudentsInEachCampus(const int arr[MAXCRS][MAXCAMPUS][4]); /* campus summation function */
int find_students(int arr[MAXCRS][MAXCAMPUS][4], int rank, int course); /* number of students by course and rank on all campus function */

int main(void)
{
    int ders_kayit [MAXCRS] [MAXCAMPUS] [4];
    ders_kayitStudents(ders_kayit);
    displayNoStudentsInEachCourse(ders_kayit);
    displayNoStudentsInEachCampus(ders_kayit);

    find_students(ders_kayit , 1, 2); /* test function */

return 0; /* successful termination */
}

void ders_kayitStudents(int arr[MAXCRS][MAXCAMPUS][4]) /* function to get inputs */
{
    int i, j; /* counters */

    for(i=0; i<MAXCRS; i++) /* course counter loop */
    {
        printf("Processing course number %d: \n", i); /* course number entry */

        for(j=0; j<MAXCAMPUS; j++) /* campus counter loop */
        {
            printf(" Campus %d \n", j);
            {
                printf(" Enter number of Freshman > ");
                scanf("%d", &arr[i][j][0]); /*Freshman number entry */
                printf(" Enter number of Sophomores > ");
                scanf("%d", &arr[i][j][1]); /*Sophomores number entry */
                printf(" Enter number of Juniors > ");
                scanf("%d", &arr[i][j][2]); /*Juniors number entry */
                printf(" Enter number of Seniors > ");
                scanf("%d", &arr[i][j][3]); /*Seniors number entry */
            }
        }
    }
}

void displayNoStudentsInEachCourse(const int arr[MAXCRS][MAXCAMPUS][4]) /* course summation function */
{
    int courseTot=0; /* first total */
    int i, j, k; /* counters */
    void ders_kayitStudents(int arr[MAXCRS][MAXCAMPUS][4]); /* function to get inputs */

    for(i=0; i<MAXCRS; i++) /* course counter loop */
    {
        for(j=0; j<MAXCAMPUS; j++) /* campus counter loop */
        {
            for(k=0; k<4; k++) /* rank counter loop */
            {
                courseTot = courseTot + arr[i][j][k]; /* course number summation */
            }
        }
        printf("Number of students in course %d is %d \n", i, courseTot); /* course number printout */
        courseTot=0; /* total 0 at the end of each loop */
    }
}

void displayNoStudentsInEachCampus(const int arr[MAXCRS][MAXCAMPUS][4]) /* campus summation function */
{
    int campusTot_0=0; /* first total campus 0 */
    int campusTot_1=0; /* first total campus 1 */
    int i, k; /* counters */
    void ders_kayitStudents(int arr[MAXCRS][MAXCAMPUS][4]); /* function to get inputs */

    for(i=0; i<MAXCRS; i++) /* course counter loop */
    {
        for(k=0; k<4; k++) /* rank counter loop */
        {
            campusTot_0 = campusTot_0 + arr[i][0][k]; /* campus 0 number summation */
        }
    }
    printf("Number of students in campus 0 is %d \n", campusTot_0); /* campus 0 number printout */

    for(i=0; i<MAXCRS; i++) /* course counter loop */
    {
        for(k=0; k<4; k++) /* rank counter loop */
        {
            campusTot_1 = campusTot_1 + arr[i][1][k]; /* campus 1 number summation */
        }
    }
    printf("Number of students in campus 1 is %d \n", campusTot_1); /* campus 1 number printout */
}

int find_students(int arr[MAXCRS][MAXCAMPUS][4], int rank, int course) /* number of students by course and rank on all campus function */
{
    void ders_kayitStudents(int arr[MAXCRS][MAXCAMPUS][4]); /* function to get inputs */
    int i, k; /* counters */

    for(k=0; k<4; k++) /* course counter loop */
    {
        if (k==rank)
        {
            for(i=0; i<MAXCRS; i++) /* rank counter loop */
            {
                if (i==course)
                {
                    if (rank == 0) /* 0.rank according to specific numbers */
                    {
                        printf("\nFreshman student in Course %d on all campus: %d", course, arr[course][1][rank]+arr[course][0][rank]);
                    }
                    else if (rank ==1) /* 1.rank according to specific numbers */
                    {
                        printf("\nSophomores student in Course %d on all campus: %d", course, arr[course][1][rank]+arr[course][0][rank]);
                    }
                    else if (rank == 2) /* 2.rank according to specific numbers */
                    {
                        printf("\nJuniors student in Course %d on all campus: %d", course, arr[course][1][rank]+arr[course][0][rank]);
                    }
                    else if (rank == 3) /* 3.rank according to specific numbers */
                    {
                        printf("\nSeniors student in Course %d on all campus: %d", course, arr[course][1][rank]+arr[course][0][rank]);
                    }
                }
            }
        }
    }
    return 0; /* successful termination */
}





