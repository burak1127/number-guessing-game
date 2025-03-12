#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int tahmin(){

    srand(time(NULL));

      int sayi = 1+rand() % 101;
    int i;
    printf("SAYI URETILDI TAHMINE BASLAYABILIRSINIZ HER YANLIS TAHMINDE -1 PUAN ALIRSINIZ\n");
    printf("TAHMININIZI GIRIN: ");
    scanf("%d", &i);
    int skor = 10;
    while (i != sayi && skor != 1){
        if(i>sayi){
            skor = skor - 1;
            printf("SKORUNUZ:%d\n",skor);
            printf("DAHA KUCUK BIR SAYI GIRIN:");
            scanf("%d", &i);
        }
        else if(i<sayi){
            skor = skor - 1;
            printf("SKORUNUZ:%d\n",skor);
            printf("DAHA BUYUK BIR SAYI GIRIN:");
            scanf("%d", &i);
        }
        
    }
    if(skor == 1){
        printf("KAYBETTINIZ BASKA SAYIYLA TEKRAR DENEYIN-->");
        return tahmin();
    }
    else{
    return printf("TEBRIKLER BULDUNUZ SKORUNUZ:%d", skor);
}}

int main(void){
    return tahmin();}