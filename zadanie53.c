#include <stdio.h>
#include <stdlib.h>

#include "zadanie53.h"

const int ILOSC_WARTOSCI_CEN=3;

void wczyt_netto(int tablica_netto[]){
    int i=0;
    do{
        printf("Podaj wartosc nr. %d: ",i+1);
        scanf("%d", &tablica_netto[i]);
        i++;
    }while(i<ILOSC_WARTOSCI_CEN);
    printf("\n");
}

void wczyt_vat(int tablica_vat[]){
    int i=0;
    do{
        int vat=0;
        printf("Wpisz vat dla ceny nr. %d: ",i+1);
        scanf("%d", &vat);
        if(vat == 0 || vat == 5 || vat == 8 || vat == 23){
            tablica_vat[i]=vat;
            i++;
        } else {
            printf("Podano zly vat");
            continue;
        }
    }while(i<ILOSC_WARTOSCI_CEN);
    printf("\n");
}

void oblicz_brutto(int tablica_netto[], int tablica_vat[], float ceny[]){
    int i=0;
    float obliczenia;

    do{
        obliczenia = tablica_netto[i] + (tablica_netto[i] * tablica_vat[i] / 100);
        ceny[i]=obliczenia;
        i++;
    }while(i<ILOSC_WARTOSCI_CEN);
}

void wypisz_ceny(float ceny[])
{
    int i;
    for(i=0;i<ILOSC_WARTOSCI_CEN;i++)
    {
        printf("Cena nr. %d to: %f\n",i+1, ceny[i]);
    }
}


void zadanie533(void)
{
    int t_netto[3];
    int t_vat[3];
    float t_ceny[3];

    wczyt_netto(t_netto);
    wczyt_vat(t_vat);
    oblicz_brutto(t_netto, t_vat, t_ceny);
    wypisz_ceny(t_ceny);
}
