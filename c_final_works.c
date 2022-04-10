////#include <stdio.h>
////
////int main()
////{
////    char ekle[20];
////
////    FILE *dosya = fopen("Cdeneme3", "a");
////
////    if(dosya == NULL)
////        printf("Hata");
////    else
////    {
////        printf("String giriniz: ");
////        fgets(ekle,20,stdin);
////        fputs(ekle,dosya);
////        printf("Yazýlan karakter %c \n", ekle[i]);
////
////    }
////}
////

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int i;
//    int numbers[100];
//    float sum = 0;
//    float avg;
//
//    for(i=0; i<10 ;i++)
//    {
//        printf("%d.Sayiyi giriniz: ", i+1);
//        scanf("%d", &numbers[i]);
//    }
//
//    for(i=0; i<10 ;i++)
//    {
//        printf("Dizinin %d.degeri: %d \n", i+1, numbers[i]);
//    }
//
//    avarage(numbers,&sum,&avg);
//
//    printf("Toplam is %.f", sum);
//    printf(" Ortalama is %.2f", avg);
//
//
//}
//
//void avarage(int numbers[], float *sump, float *avgp)
//{
//    int i;
//    for(i=0; i<10 ;i++)
//    {
//        *sump += numbers[i];
//        *avgp = *sump /10;
//
//    }
//}

//int main()
//{
//    char ch1 = 'B';
//    char ch7 = 'K';
//
//    printf("Ch1 %c  %d \n",ch1,ch1);
//    printf("Ch7 %c  %d",ch7,ch7);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
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
//            lower+=1;
//        else if(isupper(ch))
//            upper++;
//        else if(isdigit(ch))
//            digit++;
//        else if(isspace(ch))
//            space++;
//        else if(ispunct(ch))
//            punct++;
//        else
//            other++;
//    }
//
//    printf("Sırasıyla özellikler: %d \n %d \n %d \n %d \n %d \n %d \n", lower, upper, digit, space, punct, other);
//
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char line[100];

    printf("Metin girin: ");
    getc(line);

    printf("Büyük harf yazdırma: ");
    upper(&line);
    printf("sonuc is: %c", line);

    return 0;
}

void upper(char *line)
{
    *line= toupper(*line);
}





