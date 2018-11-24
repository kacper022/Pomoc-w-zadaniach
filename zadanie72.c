#include <stdio.h>
#include <stdlib.h>

#include "zadanie72.h"

const int ILOSC_OKRETOW = 6;        /* MAX ILOSC OKRETOW: 6 */

struct statki{
    char nazwa[50];
    char bandera[50];
    float wypornosc;
    int czy_sprawny;
};

struct statki okret[6];

void wczytaj_dane(void){

    int i;
    char sprawny[4];

    for(i=0;i<ILOSC_OKRETOW;i++){

        printf("Podaj nazwe okretu nr. %d: ",i+1);
        scanf("%s", okret[i].nazwa);

        printf("Podaj bandere okretu nr. %d: ",i+1);
        scanf("%s", okret[i].bandera);

        printf("Podaj wypornosc okretu nr. %d (wartosc w tonach): ",i+1);
        scanf("%f", &okret[i].wypornosc);

        czy_ok:
        printf("Podaj czy okret nr. %d jest sprawny (tak lub nie): ",i+1);
        scanf("%s", sprawny);

        if(sprawny[0]=='t')
            okret[i].czy_sprawny = 1;

        else if(sprawny[0]=='n')
            okret[i].czy_sprawny = 0;

        else{
            printf("Podano zla wartosc, ponow probe!\n");
            goto czy_ok;
        }

        system("CLS");

    }
}

void wypisz_wszystkie(void){
    int i;

    printf("    *WSZYSTKIE OKRETY*\n");

    for(i=0; i<ILOSC_OKRETOW; i++){

        if(okret[i].czy_sprawny==1)
            printf("%d. Nazwa: %s  Bandera: %s  Wypornosc: %6.3f  Czy sprawny: TAK\n",i+1, okret[i].nazwa, okret[i].bandera, okret[i].wypornosc);

        else
            printf("%d. Nazwa: %s  Bandera: %s  Wypornosc: %6.3f  Czy sprawny: NIE\n",i+1, okret[i].nazwa, okret[i].bandera, okret[i].wypornosc);
    }
}

void wypisz_niesprawne(void){
    int i;

    printf("\n  *OKRETY NIESPRAWNE*\n");

    for(i=0;i<ILOSC_OKRETOW;i++){

        if(okret[i].czy_sprawny==0){

            printf("%d. Nazwa: %s  Bandera: %s  Wypornosc: %6.3f  Czy sprawny: NIE\n",i+1, okret[i].nazwa, okret[i].bandera, okret[i].wypornosc);

        }
    }
}

void oblicz_sume_sprawnych(void){
    int i;
    float suma=0;

    printf("\n  *SUMA WYPORNOSCI WSZYSTKICH SPRAWNYCH OKRETOW: ");

    for(i=0;i<ILOSC_OKRETOW;i++){

        if(okret[i].czy_sprawny==1){

            suma+=okret[i].wypornosc;

        }
    }

    printf("%f *", suma);
}

void oblicz_sume_wszystkich(void){
    int i;
    float suma=0;

    printf("\n  *SUMA WYPORNOSCI WSZYSTKICH OKRETOW: ");

    for(i=0;i<ILOSC_OKRETOW;i++){

        suma+=okret[i].wypornosc;

    }
    printf("%f *", suma);
}

void zadanie722(void){

    wczytaj_dane();
    wypisz_wszystkie();
    wypisz_niesprawne();
    oblicz_sume_wszystkich();
    oblicz_sume_sprawnych();
}
