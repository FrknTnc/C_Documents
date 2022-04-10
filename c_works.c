#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *dosya_oku;
    FILE *dosya_yaz;

    dosya_oku= fopen("input.txt","r");
    dosya_yaz= fopen("output.txt","w");

    char dizi[6][100];
    int line =0;
    int word_number=0;
    int kelime_sayisi[5];

    while(fgets(dizi[line],sizeof(dizi),dosya_oku))
    {
        char *token = strtok(dizi[line]," ");

        while(*token != NULL)
        {
//            printf("\n %s",token);
            *token = strtok (NULL, " ");
            word_number++;
        }
        kelime_sayisi[line]=word_number;
//        printf("Line: %d, \nword_number: %d",line+1,word_number);
        word_number=0;
        line++;
    }
    fprintf(dosya_yaz, "Line     Word Number\n");
    for(line=0;line<5;line++){

        fprintf(dosya_yaz,"%d   %10d\n",line+1,kelime_sayisi[line]);
    }
//    fscanf(dosya_oku,"%d   %10d\n",&line,kelime_sayisi);
    return 0;
}
