#include <stdio.h>

int main()
{
    char ekle[20];
    int i;

    FILE *dosya = fopen("Cdeneme4.txt", "a");

    if(dosya == NULL)
        printf("Hata");
    else
    {
        printf("String giriniz: ");
        fgets(ekle,20,stdin);
        fputs(ekle,dosya);

        printf("Yazýlan karakter %s \n", ekle);

    }
}


#include <stdio.h>
#include <stdlib.h>

void avarage(int numbers[], float *sump, float *avgp);

int main()
{
    int i;
    int numbers[100];
    float sum = 0;
    float avg;

    for(i=0; i<10 ;i++)
    {
        printf("%d.Sayiyi giriniz: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for(i=0; i<10 ;i++)
    {
        printf("Dizinin %d.degeri: %d \n", i+1, numbers[i]);
    }

    avarage(numbers,&sum,&avg);

    printf("Toplam is %.f", sum);
    printf(" Ortalama is %.2f", avg);


}

void avarage(int numbers[], float *sump, float *avgp)
{
    int i;
    for(i=0; i<10 ;i++)
    {
        *sump += numbers[i];
        *avgp = *sump /10;
    }
}

int main()
{
    char ch1 = 'B';
    char ch7 = 'K';

    printf("Ch1 %c  %d \n",ch1,ch1);
    printf("Ch7 %c  %d",ch7,ch7);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char line[100];
    char ch;
    int lower=0,upper=0,digit=0,space=0,punct=0,other=0;

    puts("Metin giriniz: ");
    gets(line);
    puts(line);

    for(int i=0;line[i]!='\0';i++)
    {
        ch = line[i];
        if(islower(ch))
            lower+=1;
        else if(isupper(ch))
            upper++;
        else if(isdigit(ch))
            digit++;
        else if(isspace(ch))
            space++;
        else if(ispunct(ch))
            punct++;
        else
            other++;
    }

    printf("Sırasıyla özellikler: %d \n %d \n %d \n %d \n %d \n %d \n", lower, upper, digit, space, punct, other);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char x[100];
    char y[100];

    printf("X Metin girin: ");
    gets(x);

    printf("Y Metin girin: ");
    gets(y);
//
//    printf("Strcpy kullaniyoruz: \n");
//    printf(strcpy(x,y));
//    printf("\n");
//    puts(x);
//    puts(y);

    printf("Strncpy kullaniyoruz: \n");
    printf(strncpy(x,y,3));
    printf("\n");
    puts(x);
    puts(y);
////
////          printf("Strcat kullaniyoruz: \n");
////          printf(strcat(x,y));
////          printf("\n");
////          puts(x);
////          puts(y);
////
////          printf("Strncat kullaniyoruz: \n");
////          printf(strncat(x,y,4));
////          printf("\n");
////          puts(x);
////          puts(y);
////
    return 0;
}


void compare(char *a,char *b);

int main()
{
    char x[100];
    char y[100];

    printf("X Metin girin: ");
    gets(x);

    printf("Y Metin girin: ");
    gets(y);

    if (strcmp(x,y)==0)
        printf("Esit");
    else if(strcmp(x,y)<0)
        printf("Y buyuk X");
    else if(strcmp(x,y)>0)
        printf("X buyuk Y");

//    if (strncmp(x,y,3)==0)
//        printf("Esit");
//    else if(strncmp(x,y,3)<0)
//        printf("Y buyuk X");
//    else if(strncmp(x,y,3)>0)
//        printf("X buyuk Y");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void buyutme(char *p);

int main()
{
    char word[20];

    printf("Metin giriniz: ");
    gets(word);
    buyutme(word);
    printf("cikti: %s",word);

    return 0;
}

void buyutme(char *p)
{
    while (*p) {
        *p = toupper(*p);
//        *p = tolower(*p);
        p++;
    }
}

int main()
{
    char strA[70];
    int length = 0;

    printf("Metin giriniz: ");
    gets(strA);

    char *p = strtok(strA, " ");

    while(p != NULL)
    {
        printf("word: %s  length: %d \n", p,strlen(p));
        p = strtok(NULL, " ");
    }
}
//
//****************** space ile ayrı en uzun kelimeyi bul ***********
int main()
{
    char strA[70];
    int length = 0;
    char *p;

    printf("Metin giriniz: ");
    gets(strA);

    char length_name[70];

    for(p = strtok(strA, " ");p;p=strtok(NULL, " "))
    {
        printf("word: %s  length: %d \n", p,strlen(p));
        if (strlen(p) > length)
        {
            length = strlen(p);
            strcpy(length_name, p);
        }
    }
    printf("\n Word is: %s and %d", length_name,length);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void compare(char *a,char *b);

int main()
{
    char x[100];
    char y[100];

    printf("X Metin girin: ");
    gets(x);

    printf("Y Metin girin: ");
    gets(y);

    compare(x,y);
    return 0;
}
void compare(char *a,char *b)
{

    if (strcmp(a, b)==0)
        printf("Esit");
    else if(strcmp(a, b)<0)
        printf("Y buyuk X");
    else if(strcmp(a, b)>0)
        printf("X buyuk Y");
}

#include <stdio.h>

int main()
{
    int a =6;
    int *p = &a;
    *p=15;

    printf("Adresi: %p \n", &a);
    printf("Adresi: %p \n", p);
    printf("Degeri: %d", *p);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char strA[70];
    char A[100] = { };

    printf("Metin giriniz: ");
    gets(strA);

    for(char *p = strtok(strA, " ");p;p = strtok(NULL ," "))
    {
        strcat(A,p);
//      printf("\n Word is: %s ", A);
    }
    printf("\nWord is: %s ", A);
 }



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *dosya_oku;

    dosya_oku= fopen("input.txt","r")

    char dizi[5][100];
    int line =0;

    while(fgets(dizi[line],sizeof(dizi),dosya_oku))
    {
        char *token = strtok(dizi[k]," ");

        while(token != NULL)
        {
            printf("%s",token);
            token = strtok (NULL, " ");
        }
    }

}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void compare(int *a,int *b);

int main()
{
    int *x;
    int *y;

    printf("X sayi girin: ");
    scanf("%d",&x);

    printf("Y sayi girin: ");
    scanf("%d",&y);

    compare(&x,&y);
    return 0;
}
void compare(int *a,int *b)
{

    if (*a == *b)
        printf("Esit");
    else if(*a < *b)
        printf("Y buyuk X");
    else if(*a > *b)
        printf("X buyuk Y");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i;
for (i=0; i < 50; i++)
printf( "Error Number = %d %s\n", i, strerror( i ) );
printf("\n\n");
system("pause");
return 0;
}

int main()
{
    char z[15] = {'\0'};

    puts("Enter String: ");
    scanf("%[^fai]", z);

    printf("output: %s", z);

    return 0;
}
