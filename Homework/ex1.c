#include <stdio.h>

/*
=========================================================
          ZADANIA Z PROGRAMOWANIA W JĘZYKU C
=========================================================

TEMAT:
- Operator modulo (%)
- Dzielenie całkowite (/)
- Pętla for
- Pętla while
- Instrukcje warunkowe if / else

INSTRUKCJA:
1. Przeczytaj polecenie wybranego zadania.
2. Napisz rozwiązanie wewnątrz odpowiedniej funkcji.
3. W funkcji main() odkomentuj wywołanie tego zadania.
4. Uruchom program i sprawdź wynik.
5. Przed kolejnym zadaniem zakomentuj poprzednie wywołanie.
=========================================================
*/

/*
=========================================================
ZADANIE 1 - LICZBY PODZIELNE PRZEZ 3
=========================================================

Napisz program, który:
1. Pobierze od użytkownika dodatnią liczbę całkowitą n.
2. Wypisze wszystkie liczby od 1 do n podzielne przez 3.
3. Policz, ile takich liczb znaleziono.

Przykład:

Podaj n: 15

Liczby podzielne przez 3:
3 6 9 12 15
Liczba znalezionych liczb: 5

*/

int zadanie1(void) {

    printf("Podaj n: ");
    int n;
    if(scanf("%d", &n) != 1){
        printf("Podano niepoprawne dane");
        return 1;
    }
    if(n <= 0){
        printf("Podana liczba musi byc dodatnia");
        return 2;
    }
    int liczba_znalezionych = 0;
    for(int i = 1; i <= n ; i++){
        if(i % 3 == 0){
            printf("%d ", i);
            liczba_znalezionych++;
        }
    }
    printf("\n");
    printf("Liczba znalezionych liczb: %d", liczba_znalezionych);

}


/*
=========================================================
ZADANIE 2 - SUMA LICZB PARZYSTYCH
=========================================================

Napisz program, który:
1. Pobierze dwie liczby całkowite a i b (a <= b).
2. Znajdzie wszystkie liczby parzyste od a do b.
3. Obliczy ich sumę.
4. Wypisze wynik.

Przykład:

Podaj a: 2
Podaj b: 10

Liczby parzyste: 2 4 6 8 10

Suma: 30

Wymagania:
- Pętla for.
- Operator modulo.
- Instrukcja if.
*/

int zadanie2(void) {

    printf("Podaj a: ");
    int a;
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    printf("Podaj b: ");
    int b;
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (a > b) {
        printf("Pierwsza liczba: %d musi byc mniejsza od drugiej liczby: %d", a, b);
        return 2;
    }
    int suma = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            suma = suma + i;
        }
    }
    printf("\n");
    printf("Suma: %d", suma);

}


/*
=========================================================
ZADANIE 3 - LICZBA CYFR
=========================================================

Napisz program, który:
1. Pobierze nieujemną liczbę całkowitą.
2. Obliczy liczbę jej cyfr.
3. Wypisze wynik.

Przykład:

Podaj liczbe: 12345

Liczba cyfr: 5

Drugi przykład:

Podaj liczbe: 0

Liczba cyfr: 1

*/

int zadanie3(void) {

    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba < 0) {
        printf("Podana liczba musi byc nieujemna");
        return 2;
    }
    int liczba_cyfr = 0;
    while (liczba > 0) {
        liczba = liczba / 10; // 
        liczba_cyfr++;
    }
    printf("Liczba cyfr: %d", liczba_cyfr);

}


/*
=========================================================
ZADANIE 4 - SUMA CYFR PARZYSTYCH
=========================================================

Napisz program, który:
1. Pobierze dodatnią liczbę całkowitą.
2. Znajdzie wszystkie cyfry parzyste tej liczby.
3. Obliczy ich sumę.

Przykład:

Podaj liczbe: 123456

Cyfry parzyste: 6 4 2

Suma cyfr parzystych: 12

Uwaga:
Cyfry można wypisywać w kolejności od prawej do lewej.

*/

int zadanie4(void) {

    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba <= 0) {
        printf("Podana liczba jest nieujemna");
        return 2;
    }
    printf("Cyfry parzyste: ");
    int suma_cyfr = 0;
    int ostatnia_cyfra;
    while (liczba > 0) {
        ostatnia_cyfra = liczba % 10;
        if (ostatnia_cyfra % 2 == 0) {
            printf("%d ", ostatnia_cyfra);
            suma_cyfr = suma_cyfr + ostatnia_cyfra;
        }
        liczba = liczba / 10;
    }
    printf("\n");
    printf("Suma cyfr parzystych: %d", suma_cyfr);

}


/*
=========================================================
ZADANIE 5 - ILE RAZY WYSTEPUJE CYFRA?
=========================================================

Napisz program, który:
1. Pobierze nieujemną liczbę całkowitą.
2. Pobierze cyfrę od 0 do 9.
3. Sprawdzi, ile razy wskazana cyfra
   występuje w podanej liczbie.

Przykład:

Podaj liczbe: 1223322
Podaj cyfre: 2

Cyfra 2 wystepuje 4 razy.

Drugi przykład:

Podaj liczbe: 10020
Podaj cyfre: 0

Cyfra 0 wystepuje 3 razy.

*/

int zadanie5(void) {

    int zadanie5(void) {
    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba <= 0) {
        printf("Podana liczba musi byc nieujemna");
        return 2;
    }
    printf("Podaj cyfre: ");
    int cyfra;
    if (scanf("%d", &cyfra) !=1 ) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (cyfra < 0 && cyfra > 9) {
        printf("Cyfra musi byc z przedzialu od 0 do 9");
        return 2;
    }
    int ile_razy_wystepuje = 0;
    while (liczba > 0) { 
        if (liczba % 10 == cyfra) {
            ile_razy_wystepuje++;
        }
        liczba = liczba / 10;
    }
    printf("Cyfra %d wystepuje %d razy", cyfra, ile_razy_wystepuje);

}


/*
=========================================================
ZADANIE 6 - ODWRACANIE LICZBY
=========================================================

Napisz program, który:
1. Pobierze dodatnią liczbę całkowitą.
2. Odwróci kolejność jej cyfr.
3. Wypisze odwróconą liczbę.

Przykład:

Podaj liczbe: 1234

Odwrocona liczba: 4321

Drugi przykład:

Podaj liczbe: 1200

Odwrocona liczba: 21

Wskazówka:
Nową liczbę można budować, mnożąc aktualny
wynik przez 10 i dodając kolejną cyfrę.
*/

int zadanie6(void) {

    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba <= 0) {
        printf("Podana liczba musi byc dodatnia");
        return 2;
    }
    int wynik = 0;
    int ostatnia_liczba;
    while (liczba > 0) {
        ostatnia_liczba = liczba % 10;
        wynik = (wynik * 10) + ostatnia_liczba;
        liczba = liczba / 10;
    }
    printf("Odwrocona liczba: %d", wynik);
}

// 123 -> 321 
// 3 * 100 + 2 * 10 + 1 * 1 = 321 

// 4321  -> 1234 

// 1 * 1000 + 2 * 100 + 3 * 10 + 4 * 1 = 1234
/*
=========================================================
                    FUNKCJA MAIN
=========================================================

Odkomentuj TYLKO JEDNO zadanie, które chcesz uruchomić.

Przykład:

zadanie1();

Aby przejść do następnego zadania:
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
    // zadanie5();
    // zadanie6();

    return 0;
}
