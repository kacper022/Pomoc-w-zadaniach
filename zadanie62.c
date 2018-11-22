#include <stdio.h>
#include <stdlib.h>

#include "zadanie62.h"

/*Zadanie 2. Napisz program, operuj¹cy na tablicy tablic o rozmiarach: zewnêtrzna 5 elementów, wewnêtrzna 3
elementy (macierz posiadaj¹ca trzy wiersze i piêæ kolumn).
Program ma za zadanie:
- wczytaæ ceny netto poszczególnych produktów do pierwszego wiersza macierzy w funkcji wczyt_netto,
- wczytaæ stawki VAT dla poszczególnych produktów do drugiego wiersza macierzy w funkcji wczyt_vat,
- obliczyæ ceny netto (wstawiæ je do trzeciego wiersza macierzy) w funkcji oblicz_brutto,
- wyœwietliæ ca³oœæ macierzy (wypisz_ceny) wg przyk³adu:
Towar nr 1. Netto= 10.00 z³, VAT=23%, Cena brutto= 12.30 z³
Towar nr 1. Netto= 100.00 z³, VAT= 0%, Cena brutto= 100.00 z³
UWAGA: nale¿y u¿yæ odpowiednich znaków formatuj¹cych szerokoœæ pól by zapewniæ równe, kolumnowe
wyœwietlanie liczb (jak na fakturze).*/

void oblicz_brutto6(float tablica[5][3]){
    int j;
    float obliczenia;
    for(j=0;j<5;j++)
    {
        obliczenia = tablica[j][0] + (tablica[j][0] * tablica[j][1] / 100);
        tablica[j][2] = obliczenia;
    }

}

void wczyt_vat6(float tablica[5][3]){
    int j=0;
    printf("\n");
    do{
        int vat=0;
        printf("Wpisz vat dla ceny nr. %d: ",j+1);
        scanf("%d", &vat);
        if(vat == 0 || vat == 5 || vat == 8 || vat == 23){
            tablica[j][1]=vat;
            j++;
        } else {
            printf("Podano zly vat");
            continue;
        }
    }while(j<5);
}

void wczyt_netto6(float tablica[5][3]){
    int j;
    printf("\n");
    for(j=0;j<5;j++){
        printf("Wpisz wartosc netto dla kolumny nr. %d ",j+1);
        scanf("%f", &tablica[j][0]);
    }
}

void wypisz_ceny6(float tablica[5][3]){
    int i;
    printf("\n");
    for(i=0;i<5;i++){
        printf("Towar nr %d. Netto= %6.2f zl,     VAT=%2.0f%c,    Cena Brutto= %7.2fzl\n", i+1,tablica[i][0],tablica[i][1],37,tablica[i][2]);
    }
}

void zadanie622(void){
    float macierz[5][3];
    wczyt_netto6(macierz);
    wczyt_vat6(macierz);
    oblicz_brutto6(macierz);
    wypisz_ceny6(macierz);
}
