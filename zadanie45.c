#include <stdio.h>
#include <stdlib.h>
#include "zadanie45.h"

#include<conio.h>


void pauza5(void)
{
    printf("\n...nacisnij klawisz by kontynuowac...");
    fflush(stdin);
    getch();
}

void dodajOpcje5(char napis[], int dlugosc,...){
    int y=186;
    int i=0;

    printf("%c",y);

    while(napis[i]!='\0')
    {
        printf("%c", napis[i]);
        i++;
    }

    while(i<dlugosc)
    {
        printf(" ");
        i++;
    }

    printf("%c", y);
}

void wypisanie5(void)
{
    printf("\nTrzy i pol najwazniejszych zadady pracy ze wskaznikami:");
    printf("\n\n1. Deklaracja wskaznika: typ *nazwa_zmiennej_wskaznikowej");
    printf("\n np: wskaznik na float o nazwie wsk_p deklaruje sie float *wsk_p");
    printf("\n np: wskaznik na int o nazwie i_p deklarije sie int *i_p");
    pauza5();
    printf("\n\n2. *nazwa_zmiennej_wskaznikowej oznacza zawartosc komorki,");
    printf("\n wskazywanej przez wskaznik,");
    printf("\n np: *i_p to zawartosc komorki wskazywanej przez i_p");
    pauza5();
    printf("\n\n3. i_p oznacza adres, przechowywany przez wskaznik, np. 01AF:14E2");
    pauza5();
    printf("\n\n\xAB. & pozwala okreslic adres zmiennej:");
    printf("\n np: &i pozwala okreslic w ktorej komorce pamieci jest i");
    pauza5();
    printf("\n\n Najczestszym bledem studentow jest przekonanie, ze w deklaracji");
    printf("\n int *i_p; typ zmiennej to int, a jej nazwa to *i_p - a tak nie jest");
    printf("\n typ zmiennej to int * a nazwa zmiennej to i_p");
    printf("\n");
    printf("\nNacisnij klawisz by wrocic do menu");
    getch();
    fflush(stdin);
    zadanie5();
}

void przyklad5(void)
{
    int *i_p;
    int i;
    float x;
    float *wsk_p;
    printf("\n Przyklad programu, operujacego na wskaznikach");
    printf("\n\nMamy zmienne: int i oraz float x, nadajemy im wartosci.");

    printf("\nPodaj wartosc zmiennej i (calkowita): ");
    scanf("%d",&i);
    printf("\nPodaj wartosc zmiennej x (rzeczywista): ");
    scanf("%f",&x);
    printf("\nPodane wartosci to %d oraz %.2f",i,x);
    pauza5();
    printf("\n\nSprawdzimy pod jakimi adresami sa te zmienne");
    printf("\nZmienna i jest pod adersem %p, zmienna x pod adresem %p",&i,&x);
    pauza5();
    printf("\n\nNadamy wartosci tych adresow zmiennym wskaznikowym i_p oraz wsk_p");
    printf("\nza pomoca operacji i_p=&i oraz wsk_p=&x");
    i_p=&i;
    wsk_p=&x;
    pauza5();
    printf("\n\nWypiszemy teraz wartosci zmiennych wskaznikowych ");
    printf("\noraz zawartosc komorek, na ktore wskazuja");
    printf("\n\nZmienna i_p ma wartosc %p, zmienna wsk_p ma wartosc %p",i_p,wsk_p);
    pauza5();
    printf("\n\nWartosc wyrazenia *i_p (zawartosc komorki, na ktora wskazuje i_p) to%d",*i_p);
    pauza5();
    printf("\n\nWartosc wyrazenia *wsk_p (zawartosc komorki, na ktora wskazuje wsk_p) to%.2f",*wsk_p);
    pauza5();
    printf("\n\nWartosc wyrazenia *i_p powinna byc taka sama jak wartosc zmiennej i");
    printf("\nponiewaz ustawilismy wskaznik i_p by wskazywal komorke, w ktorej jest i");
    pauza5();
    printf("\n\nTak samo powinno byc z *wsk_p i x");
    printf("\nNacisnij klawisz by wrocic do menu\n");
    getch();
    fflush(stdin);
    zadanie5();
}

char menu5(char *znak){
    /*  KONFIGURACJA WYMIARÓW MENU  */
    const int l=43;
    /*  ZMIENNE ODPOWIADAJACE ZA WYGLAD TABLICY */
    int lg=201;
    int pg=187;
    int x=205;
    int ld=200;
    int pd=188;
    int i;
    int sl=204;
    int sp=185;
    char wybor;

    system("CLS");
    /* rysowanie menu */
    printf("%c",lg);

    for(i=0;i<l;i++)
    {
        printf("%c",x);
    }

    printf("%c\n",pg);
    dodajOpcje5("  PRZYKLAD PROGRAMU WYKORZYSTUJACEGO MENU  ", l);
    printf("\n");
    printf("%c",sl);

    for(i=0;i<l;i++)
    {
        printf("%c",x);
    }

    printf("%c\n",sp);
    /*  KOLEJNO DODAWANE OPCJE  */
    dodajOpcje5("w - wypisanie 3 najwazniejszych zasad", l);
    printf("\n");
    dodajOpcje5("p - przyklad programu",l);
    printf("\n");
    dodajOpcje5("k - koniec pracy",l);
    /*******************************************/
    printf("\n");
    dodajOpcje5("Wybierz jedna z opcji: ",l);
    printf("\n%c",ld);
    for(i=0;i<l;i++){
        printf("%c",x);
    }
    printf("%c",pd);
    /*  PĘTLA ODPOWIADAJĄCA ZA WYPISYWANIE ZNAKU W KONSOLI */
    for(i=0; i<l*3+12;i++){
        printf("\b");
    }
    scanf("%c",&wybor);
    printf("\n");
    fflush(stdin);
    *znak = wybor;
    return wybor;
}

void zadanie5(void){
    char znak;
    do{
    switch (menu5(&znak))
    {
    case 'w':
    case 'W':
        wypisanie5();
        break;
    case 'p':
    case 'P':
        przyklad5();
        break;
    }
    if(znak=='k' || znak=='K'){
        exit(1);
    }
    }while(znak=='k' || znak=='K');
}

