#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//*****POINTER FONKSIYON*********
//
//int cube(int *ptr);
//
//int main()
//{
//    int number;
//    printf("enter number: ");
//    scanf("%d", &number);
//
//    printf("Number: %d", number);
//
//    cube(&number);
//
//    printf("\nNumber: %d", number);
//
//    return 0;
//}
//
//int cube(int *ptr)
//{
//    return *ptr = (*ptr)*(*ptr)*(*ptr);
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//
//void up(char *sp);
//
//int main()
//{
//    char metin[100];
//
//    printf("Metin giriniz: ");
//    gets(metin);
//
//    printf("Metin: ");
//    puts(metin);
//
//    up(metin);
//
//    printf("Metin 2: ");
//    puts(metin);
//
//    return 0;
//}
//
//void up(char *sp)
//{
//    while ( *sp != '\0')
//    {
//        if(islower(*sp)) {
//             *sp = toupper(*sp);
//        }
//        ++sp;
//    }
//}

//#define SIZE 9
//void bubblesort(int *array,const int size);
//
//int main()
//{
//    int a[SIZE]= {10,60,40,70,20,90,80,30,50};
//
//    printf("Original: \n");
//
//    int i;
//
//    for(i=0;i<SIZE;i++)
//    {
//        printf("%4d",a[i]);
//    }
//
//    bubblesort(a,SIZE);
//
//    printf("\nSorting: \n");
//
//    for(i=0;i<SIZE;i++)
//    {
//        printf("%4d",a[i]);
//    }
//}
//
//void bubblesort(int *array,const int size)
//{
//    void swap(int *it1,int *it2);
//
//    int k;
//    int l;
//
//    for(k=0; k < SIZE-1 ; k++)
//    {
//        for(l=0 ; l < SIZE-1; l++)
//        {
//            if(array[l]>array[l+1])
//            {
//                swap(&array[l],&array[l+1]);
//            }
//        }
//    }
//}
//
//void swap(int *it1, int *it2)
//{
//    int hold=*it1;
//    *it1 = *it2;
//    *it2=hold;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//char k1 = 'A';
//char k2 = 66;
//int k3 = 'C';
//int k4 = k1+2;
//printf("k1 = %c %d \n\n", k1, k1);
//printf("k2 = %c %d \n\n", k2, k2);
//printf("k3 = %c %d \n\n", k3, k3);
//printf("k4 = %c %d \n\n", k4, k4);
//system("PAUSE");
//return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//int k ;
//++k;
//
//printf ( "%d %c\n", k, k ) ;
//system("PAUSE");
//return 0;
//}☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺☺

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//int main()
//{
//    char line[100];
//    char ch;
//    int lower=0,upper=0,digit=0,space=0,punct=0,other=0;
//
//    printf("Metin giriniz: ");
//    gets(line);
//    puts(line);
//
//    for(int i=0;line[i]!='\0';i++)
//    {
//        ch = line[i];
//        if(islower(ch))
//            ch = toupper(ch);
//        else if(isupper(ch))
//            ch=tolower(ch);
//        else if(isdigit(ch))
//            digit++;
//        else if(isspace(ch))
//            space++;
//        else if(ispunct(ch))
//            punct++;
//        else
//            other++;
//    }
//    puts(line);
//
//    printf("Sırasıyla özellikler: %d \n %d \n %d \n %d \n %d \n %d \n", lower, upper, digit, space, punct, other);
//
//    return 0;
//}
