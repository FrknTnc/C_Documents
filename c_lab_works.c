//#include <stdio.h>
//#include <stdlib.h>
//
////int main()
////{
////    int dizi1[5];
////
////    dizi1[0] = 2;
////    dizi1[3] = 65;
////    printf("%d\n", dizi1[0]);
////
////    int dizi2[5] = {2,5,7,8,12};
//////
//////    int dizi3[] = {2,5,7,8,12};
//////
//////    for(int i=0; i<5; i++){
//////        printf("%d. eleman %d\n", i+1, dizi2[i]);
//////    }
////    //**********//
////
////    int number[3]
////    for(int j=0; j<3; j++){
////        printf("%d. eleman: ", j+1);
////        scanf("%d", &number[j]);
////    }
////    for(int i=0; i<5; i++){
////        printf("%d. eleman %d\n", i+1, number[i]);
////    }
////
////
////    return 0;
////}
////
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//float avarage(int liste[], int boyut){
//    int toplam=0;
//    float ort;
//
//    for(int j=0; j<boyut; j++){
//        toplam += liste[j];
//    }
//    ort = toplam/boyut;
//
//    return ort;
//}
//void sira(int liste[], float ort, int boyut){
//    int less= 0;
//    int greater = 0;
//    for(int k=0; k<boyut; k++){
//        if(liste[k] > ort){
//            greater += 1;
//        }
//        else if(liste[k] < ort){
//            less += 1;
//        }
//    }
//    printf("Greater: %d", greater);
//    printf("Less: %d", less);
//}
//int main()
//{
//    int liste[5];
//    for(int i=0; i<5; i++){
//        printf("%d. number: ", i+1);
//        scanf("%d", &liste[i]);
//    }
//    float ort = avarage(liste,5);
//    printf("Ortalama: %f", ort);
//    sira(liste,ort,5);
//    return 0;
//}

//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char k1 = 'A';
//    char k2 = 65;
//    char k3 = '7';
//        printf("k1\n");
//        printf("%d\n", isdigit(k1) );
//        printf("%d\n\n", isalpha(k1) );
//        printf("k2\n");
//        printf("%d\n", isdigit(k2) );
//        printf("%d\n\n", isalpha(k2) );
//        printf("k3\n");
//        printf("%d\n", isdigit(k3) );
//        printf("%d\n\n", isalpha(k3) );
//        system("PAUSE");
//    return 0;
//}

int main()
{
    char c;
    char sent[20];
    int i;

    puts("Enter input: ");

    while( (c=getchar()) != '\n')
    {
        sent[i] = c;
        i++;
    }

    sent[ i ] = '\0';

    puts(sent);

    return 0;
}


//int main()
//{
//    char s[20];
//    int x;
//    float y;
//
//    puts("Enter: ");
//    scanf("%d%f", &x, &y);
//
//    sprintf(s, "Bunlar benim inputlarim: int: %d, float: %f", x,y);
//
//    printf("Output is: \n %s", s);
//
//    return 0;
//}

int main()
{
    char s[20];
    int x;

    puts("Enter: ");
    gets(s);
    sscanf(s, "%d%f", &x);

    printf("int %d",x);

    return 0;
}



























