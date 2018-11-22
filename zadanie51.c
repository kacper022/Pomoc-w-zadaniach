#include <stdio.h>
#include <stdlib.h>

#include "zadanie51.h"

void zadanie511(void){
    int i;
    int srednia = 0;
    long liczby[3];

    for(i=0; i<3; i++){
        printf("Wpisz liczbe nr. %d: ",i+1);
        scanf("%d",&liczby[i]);
        printf("\n");
    }

    for(i=0;i<3;i++){
        srednia+=liczby[i];
    }

    printf("\nSrednia wpisanych liczb to: %d", srednia/3);
}
