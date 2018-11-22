#include <stdio.h>
#include <stdlib.h>

#include "zadanie52.h"

const int WIELKOSC = 10;
const int MAX = 20;
const int MIN = 5;

void wczytaj(int tablica[]){
    int i;
    for(i=0;i<WIELKOSC;i++){
        printf("Podaj wage jablka nr. %d: ",i+1);
        scanf("%d",&tablica[i]);
    }
    printf("\n");
}

void wypisz_tab(int tablica[]){
    int i;
    for(i=0;i<WIELKOSC;i++){
        printf("Waga jablka nr. %d to: %d\n",i+1,tablica[i]);
    }
    printf("\n");
}

float wypisz_srednia(int tablica[]){
    int i;
    float srednia=0.0;
    for(i=0;i<WIELKOSC;i++){
        srednia+=tablica[i];
    }
    printf("Srednia waga owocow to: %5.2f\n\n",srednia/WIELKOSC);
    return srednia;
}

void wypisz_odbiegajace(int tablica[]){
    int i;
    for(i=0;i<WIELKOSC;i++){
        if(tablica[i]>MAX){
            printf("Waga owocu nr. %d jest wieksza od maksimum\n",i+1);
        }
        if(tablica[i]<MIN){
            printf("Waga owocu nr. %d jest mniejsza od minimum\n",i+1);
        }
    }
    printf("\n\n");
}

void zadanie522(void){
    int tablica[10];
    wczytaj(tablica);
    getch();
    wypisz_tab(tablica);
    getch();
    wypisz_srednia(tablica);
    getch();
    wypisz_odbiegajace(tablica);
    getch();
}
