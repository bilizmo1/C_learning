#include <stdio.h>

/*
=========================================================
       WPROWADZENIE DO TABLIC W JEZYKU C
=========================================================

TEMAT:
- Deklarowanie tablic
- Indeksowanie elementow
- Wczytywanie danych do tablic
- Wypisywanie elementow tablicy
- Petla for i tablice
- Suma i srednia elementow
- Minimum i maksimum
- Operator sizeof
- Adresy elementow w pamieci
- Podstawy wskaznikow

INSTRUKCJA:
1. Przeczytaj polecenie wybranego zadania.
2. Napisz rozwiazanie wewnatrz odpowiedniej funkcji.
3. W funkcji main() odkomentuj wywolanie zadania.
4. Uruchom program i sprawdz wynik.
5. Przed kolejnym zadaniem zakomentuj poprzednie wywolanie.

KOMPILACJA:
clang arr_intro.c -o arr_intro

URUCHOMIENIE:
./arr_intro

=========================================================
*/


/*
=========================================================
                WPROWADZENIE TEORETYCZNE
=========================================================

1. CZYM JEST TABLICA?

Tablica pozwala przechowywac wiele wartosci tego
samego typu pod jedna nazwa.

Zamiast:

int a = 10;
int b = 20;
int c = 30;

Mozemy napisac:

int tab[3] = {10, 20, 30};


2. INDEKSOWANIE

Indeksy tablicy zaczynaja sie od 0.

int tab[5] = {10, 20, 30, 40, 50};

tab[0] = 10
tab[1] = 20
tab[2] = 30
tab[3] = 40
tab[4] = 50

UWAGA:
tab[5] znajduje sie poza zakresem tablicy! - segmentation foult 





5. ADRES W PAMIECI

Kazda zmienna posiada adres w pamieci.

int a = 10;

printf("%d", a);           // wartosc
printf("%p", (void *)&a);  // adres


6. ADRES ELEMENTU TABLICY

int tab[3] = {10, 20, 30};

printf("%p", (void *)&tab[0]);
printf("%p", (void *)&tab[1]);
printf("%p", (void *)&tab[2]);

Elementy tablicy sa przechowywane kolejno w pamieci.


7. WSKAZNIKI

Wskaznik przechowuje adres obiektu w pamieci.

int a = 10;
int *p = &a;

p  - adres zmiennej a
*p - wartosc zmiennej a


8. TABLICE I WSKAZNIKI

int tab[3] = {10, 20, 30};

int *p = tab;

tab[0] == *p
tab[1] == *(p + 1)
tab[2] == *(p + 2)

=========================================================
*/


/*
=========================================================
ZADANIE 1 - PIERWSZA TABLICA
=========================================================

Napisz program, ktory:

1. Utworzy tablice 5 liczb calkowitych.
2. Przypisze jej wartosci:
   10, 20, 30, 40, 50.
3. Wypisze pierwszy element.
4. Wypisze trzeci element.
5. Wypisze ostatni element.

Przyklad:

Pierwszy element: 10
Trzeci element: 30
Ostatni element: 50

Wymagania:
- Tablica typu int.
- Indeksowanie.
- Bez petli.

*/

int zadanie1(void) {

    int tablica[5] = {10, 20, 30, 40, 50};
    printf("Pierwszy element: %d\n", tablica[0]);
    printf("Trzeci element: %d\n", tablica[2]);
    printf("Ostatni element: %d\n", tablica[4]);

    return 0;
}


/*
=========================================================
ZADANIE 2 - MODYFIKOWANIE TABLICY
=========================================================

Napisz program, ktory:

1. Utworzy tablice:
   {5, 10, 15, 20, 25}

2. Wypisze wszystkie elementy tablicy.

3. Zmieni:
   - pierwszy element na 100,
   - trzeci element na 300,
   - ostatni element na 500.

4. Ponownie wypisze wszystkie elementy.

Przyklad:

Przed zmiana:
5 10 15 20 25

Po zmianie:
100 10 300 20 500

Wymagania:
- Indeksowanie.
- Petla for.
- Modyfikacja elementow tablicy.

Operator sizeof:
sizeof(tab) -- rozmiar tablicy w BAJTACH 

int N = sizeof(tab) / sizeof(tab[0])


*/



int zadanie2(void) {

    int tablica[5] = {5, 10, 15, 20, 25};
    printf("Przed zmiana:\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", tablica[i]);
    }
    printf("\nPo zmianie:\n");
    tablica[0] = 100;
    tablica[2] = 300;
    tablica[4] = 500;
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", tablica[i]);
    }


    return 0;
}


/*
=========================================================
ZADANIE 3 - WCZYTYWANIE LICZB DO TABLICY
=========================================================

Napisz program, ktory:

1. Utworzy tablice 5 liczb calkowitych.
2. Pobierze od uzytkownika 5 liczb.
3. Zapisze je w tablicy.
4. Wypisze wszystkie elementy w jednym wierszu.

Przyklad:

Podaj liczbe 1: 8
Podaj liczbe 2: 3
Podaj liczbe 3: 12
Podaj liczbe 4: 5
Podaj liczbe 5: 9

Elementy tablicy:
8 3 12 5 9

Wymagania:
- Tablica int.
- Petla for.
- scanf().
- printf().
- Sprawdzenie poprawnosci scanf().

Wskazowka:

scanf("%d", &tab[i]);

*/

int zadanie3(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
ZADANIE 4 - WYPISYWANIE OD KONCA
=========================================================

Napisz program, ktory:

1. Pobierze od uzytkownika 6 liczb calkowitych.
2. Zapisze je w tablicy.
3. Wypisze liczby w kolejnosci wprowadzenia.
4. Wypisze liczby w odwrotnej kolejnosci.

Przyklad:

Podaj 6 liczb:
1 2 3 4 5 6

Normalna kolejnosc:
1 2 3 4 5 6

Odwrotna kolejnosc:
6 5 4 3 2 1

Wymagania:
- Tablica.
- Dwie petle for.
- Bez tworzenia drugiej tablicy.

Wskazowka:
Zastanow sie, od jakiego indeksu
powinna zaczynac sie druga petla.

*/

int zadanie4(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
ZADANIE 5 - SUMA I SREDNIA ELEMENTOW
=========================================================

Napisz program, ktory:

1. Pobierze 5 liczb calkowitych.
2. Zapisze je w tablicy.
3. Obliczy sume wszystkich elementow.
4. Obliczy srednia arytmetyczna.
5. Wypisze wyniki.

Przyklad:

Podaj 5 liczb:
2 4 6 8 10

Suma: 30
Srednia: 6.00

Drugi przyklad:

Podaj 5 liczb:
1 2 3 4 7

Suma: 17
Srednia: 3.40

Wymagania:
- Tablica.
- Petla for.
- Zmienna suma.
- Rzutowanie typu.
- Wynik sredniej do 2 miejsc po przecinku.

Wskazowka:

float srednia = (float)suma / 5;

*/

int zadanie5(void) {

    
    printf("Podaj 5 liczb:\n");
    int tablica[5];
    int suma = 0;
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d", &tablica[i]);
        suma = suma + tablica[i];
    }
    printf("Suma: %d\n", suma);
    float srednia = (float)suma / 5.0f;
    printf("Srednia: %.2f", srednia);
    


    return 0;
}


/*
=========================================================
ZADANIE 6 - LICZBY PARZYSTE I NIEPARZYSTE
=========================================================

Napisz program, ktory:

1. Pobierze 8 liczb calkowitych.
2. Zapisze je w tablicy.
3. Wypisze wszystkie liczby parzyste.
4. Wypisze wszystkie liczby nieparzyste.
5. Policz, ile jest liczb parzystych.
6. Policz, ile jest liczb nieparzystych.

Przyklad:

Podaj 8 liczb:
1 2 3 4 5 6 7 8

Liczby parzyste:
2 4 6 8

Liczby nieparzyste:
1 3 5 7

Liczba parzystych: 4
Liczba nieparzystych: 4

Wymagania:
- Tablica.
- Petla for.
- Operator modulo.
- Instrukcja if / else.
- Liczniki.

*/

int zadanie6(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
ZADANIE 7 - NAJWIEKSZA I NAJMNIEJSZA LICZBA
=========================================================

Napisz program, ktory:

1. Pobierze 7 liczb calkowitych.
2. Zapisze je w tablicy.
3. Znajdzie najwiekszy element.
4. Znajdzie najmniejszy element.
5. Wypisze obie wartosci.

Przyklad:

Podaj 7 liczb:
5 12 -3 8 20 1 7

Najwieksza liczba: 20
Najmniejsza liczba: -3

Wymagania:
- Tablica.
- Petla for.
- Instrukcje if.
- Zmienne min i max.
- Bez sortowania.

Wskazowka:

int max = tab[0];
int min = tab[0];

Nastepnie porownuj kolejne elementy.

UWAGA:
Program musi dzialac rowniez wtedy,
gdy wszystkie liczby sa ujemne.

*/

int zadanie7(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
ZADANIE 8 - ADRESY ELEMENTOW TABLICY
=========================================================

Napisz program, ktory:

1. Utworzy tablice:
   {10, 20, 30, 40, 50}

2. Wypisze wartosc kazdego elementu.

3. Wypisze adres kazdego elementu w pamieci.

4. Wypisze rozmiar pojedynczego elementu.

5. Wypisze rozmiar calej tablicy.

Przyklad:

Element 0:
Wartosc: 10
Adres: 0x...

Element 1:
Wartosc: 20
Adres: 0x...

Element 2:
Wartosc: 30
Adres: 0x...

...

Rozmiar elementu: 4 bajty
Rozmiar tablicy: 20 bajtow

Uwaga:
Podane rozmiary sa przykladowe.
Rzeczywiste rozmiary zaleza od implementacji.

Wymagania:
- Tablica.
- Petla for.
- Operator &.
- Operator sizeof.
- Format %p do wypisywania adresow.
- Format %zu do wypisywania rozmiarow.

Wskazowka:

printf("%p", (void *)&tab[i]);

printf("%zu", sizeof(tab[0]));

printf("%zu", sizeof(tab));

Pytanie:
Dlaczego adresy kolejnych elementow
roznia sie o rozmiar jednego int?

*/

int zadanie8(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
ZADANIE 9 - PIERWSZY WSKAZNIK
=========================================================

Napisz program, ktory:

1. Utworzy zmienna:
   int a = 25;

2. Utworzy wskaznik p wskazujacy na a.

3. Wypisze:
   - wartosc a,
   - adres a,
   - wartosc przechowywana przez p,
   - wartosc wskazywana przez p.

4. Zmieni wartosc a na 100,
   korzystajac wylacznie ze wskaznika.

5. Ponownie wypisze wartosc a.

Przyklad:

Wartosc a: 25
Adres a: 0x...
Wartosc p: 0x...
Wartosc *p: 25

Po zmianie:

Wartosc a: 100

Wymagania:
- Wskaznik int *.
- Operator &.
- Operator *.
- Modyfikacja wartosci przez wskaznik.

Wskazowka:

int a = 25;

int *p = &a;

*p = 100;

Pytanie:
Dlaczego zmienna a zmienia wartosc,
mimo ze nie wykonujemy a = 100?

*/

int zadanie9(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
ZADANIE 10 - TABLICE I WSKAZNIKI
=========================================================

Napisz program, ktory:

1. Utworzy tablice:
   {3, 6, 9, 12, 15}

2. Utworzy wskaznik na pierwszy element tablicy.

3. Wypisze wszystkie elementy tablicy,
   korzystajac z indeksowania.

4. Wypisze wszystkie elementy tablicy,
   korzystajac z arytmetyki wskaznikow.

5. Obliczy sume elementow,
   korzystajac z arytmetyki wskaznikow.

Przyklad:

Tablica - indeksowanie:
3 6 9 12 15

Tablica - wskazniki:
3 6 9 12 15

Suma: 45

Wymagania:
- Tablica.
- Wskaznik.
- Petla for.
- Arytmetyka wskaznikow.
- Bez uzywania tab[i] w drugiej petli.

Wskazowka:

int tab[5] = {3, 6, 9, 12, 15};

int *p = tab;

printf("%d", *(p + 0));
printf("%d", *(p + 1));

Pamietaj:

tab[i] == *(tab + i)

Pytanie:
Dlaczego p + 1 wskazuje na kolejny
element tablicy, a nie na kolejny bajt?

*/

int zadanie10(void) {

    // TODO: Napisz rozwiazanie.

    return 0;
}


/*
=========================================================
                    FUNKCJA MAIN
=========================================================

Odkomentuj TYLKO JEDNO zadanie,
ktore chcesz uruchomic.

Przyklad:

zadanie1();

Aby przejsc do nastepnego zadania:

1. Zakomentuj zadanie1().
2. Odkomentuj zadanie2().
3. Uruchom program ponownie.

=========================================================
*/

int main(void) {

    // zadanie1();
    // zadanie2();
    // zadanie3();
    // zadanie4();
     zadanie5();
    // zadanie6();
    // zadanie7();
    // zadanie8();
    // zadanie9();
    // zadanie10();

    return 0;
}