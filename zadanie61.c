#include <stdio.h>
#include <stdlib.h>

void zadanie611(void){
    int i,j;
    int liczby[3][3];
    float suma=0;
    /*  ZAPISYWANIE LICZB DO TABLICY    */
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("Podaj liczbe o kordynatach %d %d: ", j+1, i+1);
            scanf("%d", &liczby[j][i]);
        }
    }

    /*  SUMOWANIE LICB  */
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            suma += liczby[j][i];
        }
    }
    /*  OBLICZANIE SREDNIEJ LICZB Z TABLICY */
    printf("\nSrednia liczb wynosi: %f\n\n", suma/9);


    /*  WYŒWIETLENIE ELEMENTÓW PARZYSTYCH   */
    printf("\nLICZBY PARZYSTE\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            if(liczby[j][i]%2==0){
                printf("Liczba %d  znajduje sie na kordynatach [%d][%d]\n",liczby[j][i],j,i);
            }
        }
    }

    /*  WYŒWIETLANIE LICZB UJEMNYCH */
    printf("\nLICZBY UJEMNE\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            if(liczby[j][i]<0){
                printf("Liczba %d  znajduje sie na kordynatach [%d][%d]\n",liczby[j][i],j,i);
            }
        }
    }

    /*  WYŒWIETLENIE LICZB PO PRZEK¥TNEJ TABLICY    */
    printf("\nLICZBY NA PRZEKATNYCH TABLICY\n");
    printf("%d   %d\n",liczby[0][0],liczby[0][2]);
    printf("  %d \n",liczby[1][1]);
    printf("%d   %d\n",liczby[2][0],liczby[2][2]);

    /* WYŒWIETLANIE TABLICY JAKO MACIERZY   */
    printf("\nPRZEDSTAWIENIE LICZB W MACIERZY\n");
    for(j=0;j<3;j++){
        printf("  |");
        for(i=0;i<3;i++){
            printf(" %d ",liczby[j][i]);
        }
        printf("|\n");
    }
}
