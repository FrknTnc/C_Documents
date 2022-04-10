//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int dizi1[5];
//
//    dizi1[0] = 2;
//    dizi1[3] = 65;
//    printf("%d\n", dizi1[0]);
//
//    int dizi2[5] = {2,5,7,8,12};
////
////    int dizi3[] = {2,5,7,8,12};
////
////    for(int i=0; i<5; i++){
////        printf("%d. eleman %d\n", i+1, dizi2[i]);
////    }
//    //**********//
//
//    int number[3]
//    for(int j=0; j<3; j++){
//        printf("%d. eleman: ", j+1);
//        scanf("%d", &number[j]);
//    }
//    for(int i=0; i<5; i++){
//        printf("%d. eleman %d\n", i+1, number[i]);
//    }
//
//
//    return 0;
//}
//
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
//
//}

#include <stdio.h>
int main()
{
    int x = -1;
    if(x++ == 0)
    {
        printf("%d", x);
    }
    else if(++x > 1)
    {
        printf("%d", x);
    }
    return 0;
}




