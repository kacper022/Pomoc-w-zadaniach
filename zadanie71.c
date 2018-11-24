#include <stdio.h>
#include <stdlib.h>

#include "zadanie71.h"


struct zwierzeta{
    char imie[30];
    char gatunek[30];
    int  wiek;
    int  czy_szczepione;
};

void zadanie711(void){
    int i;
    struct zwierzeta zwierze[5];
    for(i=0;i<5;i++){
        printf("Podaj imie zwierzecia: ");
        scanf("%s", zwierze[i].imie);
        printf("Podaj gatunek zwierzecia: ");
        scanf("%s", zwierze[i].gatunek);
        printf("Podaj wiek zwierzecia: ");
        scanf("%d", &zwierze[i].wiek);
        printf("Podaj czy zwierze jest szczepione (0 - NIE, 1 - TAK): ");
        scanf("%d", &zwierze[i].czy_szczepione);
    }

    printf("\nSpis wszystkich zwierzat:\n");
    for(i=0;i<5;i++){
        if(zwierze[i].czy_szczepione==1){
            printf("Imie to %s a gatunek to %s. Wiek zwierzecia to: %d oraz jest szczepione.\n", zwierze[i].imie, zwierze[i].gatunek, zwierze[i].wiek, zwierze[i].czy_szczepione);
        } else {
            printf("Imie to %s a gatunek to %s. Wiek zwierzecia to: %d oraz jest nie szczepione.\n", zwierze[i].imie, zwierze[i].gatunek, zwierze[i].wiek, zwierze[i].czy_szczepione);
        }
    }
    printf("\n\nSpis zwierzat szczepionych:\n");
    for(i=0;i<2;i++){
        if(zwierze[i].czy_szczepione==1){
            printf("Imie to %s a gatunek to %s. Wiek zwierzecia to: %d oraz jest szczepione.\n", zwierze[i].imie, zwierze[i].gatunek, zwierze[i].wiek, zwierze[i].czy_szczepione);
        }
    }
}
