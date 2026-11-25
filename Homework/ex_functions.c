#include <stdio.h>
#include <stdbool.h>


/*
=========================================================
ZADANIE 1 - SZESCIAN LICZBY
=========================================================

Napisz funkcję:

int szescian(int x);

Funkcja powinna:
1. Przyjmować jedną liczbę całkowitą.
2. Obliczać jej trzecią potęgę.
3. Zwracać wynik za pomocą return.

W funkcji zadanie1():
1. Pobierz liczbę od użytkownika.
2. Wywołaj funkcję szescian().
3. Wypisz wynik.

Przykład:

Podaj liczbe: 3

Szescian liczby: 27

Drugi przykład:

Podaj liczbe: -2

Szescian liczby: -8


*/


int szescian(int x) {
    return x * x * x;
}

void zadanie1(void) {

    int x = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &x) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int szescian_liczby = szescian(x);
    printf("Szescian liczby: %d", szescian_liczby);
}


/*
=========================================================
ZADANIE 2 - MAKSIMUM Z TRZECH LICZB
=========================================================

Napisz funkcję:

int maksimum(int a, int b, int c);

Funkcja powinna:
1. Przyjmować trzy liczby całkowite.
2. Znajdować największą z nich.
3. Zwracać największą liczbę.

Przykład:

Podaj a: 5
Podaj b: 12
Podaj c: 8

Najwieksza liczba: 12


*/


int maksimum(int a, int b, int c) {
    int maks = a;
    if (b > maks) {
        maks = b;
    }
    if (c > maks) {
        maks = c;
    }
    return maks;
}

void zadanie2(void) {

    int a = 0;
    printf("Podaj a: ");
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int b = 0;
    printf("Podaj b: ");
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int c = 0;
    printf("Podaj c: ");
    if (scanf("%d", &c) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int najwieksza_liczba = maksimum(a, b, c);
    printf("Najwieksza liczba: %d", najwieksza_liczba);
}


/*
=========================================================
ZADANIE 3 - CZY LICZBA JEST PARZYSTA?
=========================================================

Napisz funkcję:

bool czy_parzysta(int n);

Funkcja powinna:
1. Przyjmować liczbę całkowitą.
2. Sprawdzać, czy liczba jest parzysta.
3. Zwracać true albo false.

Przykład:

Podaj liczbe: 12

Liczba jest parzysta.

Drugi przykład:

Podaj liczbe: 7

Liczba jest nieparzysta.

Wymagania:
- Typ bool.
- Operator modulo.
- Instrukcja return.
- Funkcja nie może wypisywać wyniku.

*/


bool czy_parzysta(int n) {
    if (n % 2 == 0) {
        return true;
    }
}

void zadanie3(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    if (czy_parzysta(n) == true) {
        printf("Liczba jest parzysta");
    }
    else {
        printf("Liczba jest nieparzysta");
    }

}


/*
=========================================================
ZADANIE 4 - SUMA CYFR LICZBY
=========================================================

Napisz funkcję:

int suma_cyfr(int n);

Funkcja powinna:
1. Przyjmować nieujemną liczbę całkowitą.
2. Obliczać sumę jej cyfr.
3. Zwracać wynik.

Przykład:

Podaj liczbe: 12345

Suma cyfr: 15

Drugi przykład:

Podaj liczbe: 507

Suma cyfr: 12

Wymagania:
- Pętla while.
- Operator modulo.
- Dzielenie całkowite.
- Funkcja typu int.

*/


int suma_cyfr(int n) {
    int suma = 0;
    while (n > 0){
        int cyfra = n % 10;
        suma = suma + cyfra;
        n = n / 10;
    }
    return suma;
}

void zadanie4(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }
    if (n < 0) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int suma_wszystkich_cyfr = suma_cyfr(n);
    printf("Suma cyfr: %d", suma_wszystkich_cyfr);

}


/*
=========================================================
ZADANIE 5 - LICZBA PIERWSZA
=========================================================

Napisz funkcję:

bool czy_pierwsza(int n);

Funkcja powinna:
1. Przyjmować liczbę całkowitą.
2. Sprawdzać, czy jest liczbą pierwszą.
3. Zwracać true albo false.

Liczba pierwsza:
- Jest większa od 1.
- Ma dokładnie dwa dodatnie dzielniki:
  1 oraz samą siebie.

Przykład:

Podaj liczbe: 17

Liczba jest pierwsza.

Drugi przykład:

Podaj liczbe: 15

Liczba nie jest pierwsza.

Wymagania:
- Pętla for.
- Operator modulo.
- Instrukcja if.
- Typ bool.

Rozszerzenie:
Sprawdzaj dzielniki tylko do pierwiastka z n.

*/


bool czy_pierwsza(int n) {
    int ilosc_dzielnikow = 0;
    for (int i = 1 ; i <= n ; i++) {
        if (n % i == 0) {
            ilosc_dzielnikow++;
        }
    }
    if (ilosc_dzielnikow == 2) {
        return true;
    }
}

void zadanie5(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    if (czy_pierwsza(n) == true) {
        printf("Liczba jest pierwsza");
    }
    else {
        printf("Liczba nie jest pierwsza");
    }
}


/*
=========================================================
ZADANIE 6 - LICZBA DOSKONALA
=========================================================

Napisz funkcję:

bool czy_doskonala(int n);

Liczba doskonała jest równa sumie swoich
dodatnich dzielników właściwych.

Przykład:

6 = 1 + 2 + 3

28 = 1 + 2 + 4 + 7 + 14

Funkcja powinna:
1. Przyjmować dodatnią liczbę całkowitą.
2. Obliczać sumę jej dzielników właściwych.
3. Sprawdzać, czy suma jest równa liczbie.
4. Zwracać true albo false.

Przykład:

Podaj liczbe: 28

Liczba jest doskonala.

Wymagania:
- Pętla for.
- Operator modulo.
- Typ bool.

Rozszerzenie:
Wypisz wszystkie liczby doskonałe
z przedziału od 1 do 10000.

*/


bool czy_doskonala(int n) {
    int suma = 0;
    for (int i = 0 ; i <= n / 2 ; i++) {
        if (n % i == 0) {
            suma = suma + i;
        }
    }
    if (suma == n) {
        return true;
    }
}

void zadanie6(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }
    if (n <= 0) {
        printf("Podano niepoprawne dane!");
        return;
    }

    if (czy_doskonala(n) == true) {
        printf("Liczba jest doskonala");
    }
    else{
        printf("Liczba nie jest doskonala");
    }

}


/*
=========================================================
ZADANIE 7 - ODWRACANIE CYFR LICZBY
=========================================================

Napisz funkcję:

int odwroc(int n);

Funkcja powinna:
1. Przyjmować nieujemną liczbę całkowitą.
2. Odwracać kolejność jej cyfr.
3. Zwracać odwróconą liczbę.

Przykład:

Podaj liczbe: 1234

Odwrocona liczba: 4321

Drugi przykład:

Podaj liczbe: 1200

Odwrocona liczba: 21

Wymagania:
- Pętla while.
- Operator modulo.
- Dzielenie całkowite.
- Nie używaj tablic.

Wskazówka:

wynik = wynik * 10 + ostatnia_cyfra;

*/


int odwroc(int n) {
    int wynik = 0;
    while (n > 0) {
        int cyfra = n % 10;
        wynik = wynik * 10 + cyfra;
        n = n / 10;
    }
    return wynik;
}

void zadanie7(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int odwrocona_liczba = odwroc(n);
    printf("Odwrocona liczba: %d", odwrocona_liczba);

}


/*
=========================================================
ZADANIE 8 - CZY LICZBA JEST PALINDROMEM?
=========================================================

Napisz funkcję:

bool czy_palindrom(int n);

Palindrom to nieujemna liczba, która czytana
od lewej do prawej i od prawej do lewej
wygląda identycznie.

Przykłady:

121 -> palindrom
1331 -> palindrom
123 -> nie jest palindromem

Funkcja powinna:
1. Przyjmować nieujemną liczbę całkowitą.
2. Sprawdzać, czy jest palindromem.
3. Zwracać true albo false.

Przykład:

Podaj liczbe: 1221

Liczba jest palindromem.

Wymagania:
- Typ bool.
- Wykorzystaj funkcję odwroc() z zadania 7.
- Nie używaj tablic.

*/


bool czy_palindrom(int n) {
    if (n == odwroc(n)) {
        return true;
    }
}

void zadanie8(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }
    if (n < 0) {
        printf("Podano niepoprawne dane!");
        return;
    }

    if (czy_palindrom(n) == true) {
        printf("Liczba jest palindromem");
    }
    else {
        printf("Liczba nie jest palindromem");
    }
}


/*
=========================================================
ZADANIE 9 - NAJWIEKSZY WSPOLNY DZIELNIK
=========================================================

Napisz funkcję:

int nwd(int a, int b);

Funkcja powinna:
1. Przyjmować dwie dodatnie liczby całkowite.
2. Obliczać ich największy wspólny dzielnik.
3. Zwracać wynik.

Przykład:

Podaj a: 24
Podaj b: 36

NWD: 12

Wymagania:
- Pętla while.
- Operator modulo.
- Algorytm Euklidesa.

Wskazówka:

NWD(24, 36) = NWD(36, 24)
NWD(36, 24) = NWD(24, 12)
NWD(24, 12) = 12

*/


int nwd(int a, int b) {
    int reszta_z_dzielenia = 0;
    while (b > 0) {
        reszta_z_dzielenia = a % b;
        a = b;
        b = reszta_z_dzielenia;
    }
    return a;
}

void zadanie9(void) {

    int a = 0;
    printf("Podaj a: ");
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }
    if (a < 0) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int b = 0;
    printf("Podaj b: ");
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }
    if (b < 0) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int najwiekszy_wspolny_dzielnik = nwd(a, b);
    printf("NWD: %d", najwiekszy_wspolny_dzielnik);
}


/*
=========================================================
ZADANIE 10 - LICZNIK WYWOLAN FUNKCJI
=========================================================

Zdefiniuj zmienną globalną:

int licznik = 0;

Napisz funkcję:

int kwadrat(int x);

Funkcja powinna:
1. Zwiększać globalny licznik o 1.
2. Obliczać kwadrat przekazanej liczby.
3. Zwracać wynik.

W zadanie10():
1. Wywołaj funkcję kwadrat() pięć razy.
2. Wypisz wyniki.
3. Wypisz liczbę wywołań funkcji.

Przykład:

kwadrat(2) = 4
kwadrat(3) = 9
kwadrat(4) = 16
kwadrat(5) = 25
kwadrat(6) = 36

Liczba wywolan: 5

Wymagania:
- Zmienna globalna.
- Funkcja typu int.
- Instrukcja return.

Rozszerzenie:
Zastosuj zmienną lokalną static
zamiast zmiennej globalnej.

*/


int licznik = 0;


int kwadrat(int x) {
    return x * x;
}

void zadanie10(void) {

    for (int x = 2 ; x <= 6 ; x++) {
        printf("kwadrat(%d) = %d\n", x, kwadrat(x));
        licznik++;
    }

    printf("Liczba wywolan: %d", licznik);
}


/*
=========================================================
ZADANIE 11 - ZWIEKSZANIE LICZBY PRZEZ WSKAZNIK
=========================================================

Napisz funkcję:

void zwieksz(int *a);

Funkcja powinna:
1. Przyjmować adres zmiennej całkowitej.
2. Zwiększać wartość tej zmiennej o 10.
3. Nie zwracać żadnej wartości.

Przykład:

int x = 5;

zwieksz(&x);

printf("%d", x);

Wynik:

15

Wymagania:
- Funkcja void.
- Wskaźnik int *.
- Operator &.
- Operator *.

*/


void zwieksz(int *a) {
    *a = *a + 10;
}

void zadanie11(void) {

    int x = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &x) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    zwieksz(&x);
    printf("%d", x);

}


/*
=========================================================
ZADANIE 12 - ZAMIANA DWOCH LICZB
=========================================================

Napisz funkcję:

void swap(int *a, int *b);

Funkcja powinna:
1. Przyjmować adresy dwóch zmiennych.
2. Zamieniać ich wartości miejscami.
3. Nie zwracać żadnej wartości.

Przykład:

Podaj a: 10
Podaj b: 20

Przed zamiana:
a = 10
b = 20

Po zamianie:
a = 20
b = 10

Wymagania:
- Wskaźniki.
- Funkcja void.
- Zmienna pomocnicza.
- Nie używaj zmiennych globalnych.

*/


void swap(int *a, int *b) {
    int tymczasowa = *a;
    *a = *b;
    *b = tymczasowa;
}

void zadanie12(void) {

    int a = 0;
    printf("Podaj a: ");
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    int b = 0;
    printf("Podaj b: ");
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawne dane!");
        return;
    }

    swap(&a, &b);
    printf("a = %d\nb = %d", a, b);

}


/*
=========================================================
ZADANIE 13 - KOPIA A ADRES ZMIENNEJ
=========================================================

Napisz dwie funkcje:

void wyzeruj_kopie(int x);

void wyzeruj(int *x);

Pierwsza funkcja:
- Przyjmuje kopię wartości.
- Ustawia lokalną zmienną na 0.

Druga funkcja:
- Przyjmuje adres zmiennej.
- Ustawia oryginalną zmienną na 0.

W zadanie13():
1. Utwórz zmienną a = 50.
2. Wywołaj wyzeruj_kopie(a).
3. Wypisz a.
4. Wywołaj wyzeruj(&a).
5. Ponownie wypisz a.

Przykład:

Przed:
a = 50

Po wyzeruj_kopie:
a = 50

Po wyzeruj:
a = 0

Pytania:
1. Dlaczego pierwsza funkcja nie zmienia a? --> ponieważ tworzy kopię o innym adresie zerująć wartość w kopii
2. Dlaczego druga funkcja zmienia a? --> ponieważ funkcja dzieje się na adresie zmiennej a (nadpisuje wartość w adresie - w tym wypadku zero)
3. Czym różni się x od *x? --> x to zmienna lokalna o nowym adresie, natomiast *x to zmienna, którą przechowuje wartość konkretnego adresu

*/


void wyzeruj_kopie(int x) {
    x = 0;
}

void wyzeruj(int *x) {
    *x = 0;
}
void zadanie13(void) {

    int a = 50;

    wyzeruj_kopie(a);
    printf("a = %d\n", a);

    wyzeruj(&a);
    printf("a = %d", a);
}


/*
=========================================================
ZADANIE 14 - MINIMUM I MAKSIMUM
=========================================================

Napisz funkcję:

void min_max(int a, int b, int *min, int *max);

Funkcja powinna:
1. Przyjmować dwie liczby całkowite.
2. Wyznaczać mniejszą i większą liczbę.
3. Zapisywać minimum pod adresem min.
4. Zapisywać maksimum pod adresem max.

Przykład:

Podaj a: 12
Podaj b: 7

Minimum: 7
Maksimum: 12

Wymagania:
- Funkcja void.
- Dwa parametry przekazywane przez wartość.
- Dwa parametry będące wskaźnikami.
- Instrukcja if / else.

Wskazówka:

int minimum;
int maksimum;

min_max(12, 7, &minimum, &maksimum);

*/


void min_max(int a, int b, int *min, int *max) {
    if (a < b) {
        *min = a;
        *max = b;
    }
    else {
        *min = b;
        *max = a;
    }
}

void zadanie14(void) {

    int a = 0;
    printf("Podaj a: ");
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int b = 0;
    printf("Podaj b: ");
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int minimum = 0;
    int maksimum = 0;

    min_max(a, b, &minimum, &maksimum);
    printf("Minimum: %d\n", minimum);
    printf("Maksimum: %d", maksimum);
}


/*
=========================================================
ZADANIE 15 - DZIELENIE Z RESZTA
=========================================================

Napisz funkcję:

bool dzielenie(int a, int b,
               int *iloraz, int *reszta);

Funkcja powinna:
1. Przyjmować dwie liczby całkowite.
2. Sprawdzać, czy dzielnik jest różny od zera.
3. Obliczać iloraz całkowity.
4. Obliczać resztę z dzielenia.
5. Zapisywać oba wyniki przez wskaźniki.
6. Zwracać true, jeśli operacja się powiodła.
7. Zwracać false, jeśli dzielnik wynosi zero.

Przykład:

Podaj a: 17
Podaj b: 5

Iloraz: 3
Reszta: 2

Drugi przykład:

Podaj a: 17
Podaj b: 0

Blad: dzielenie przez zero.

Wymagania:
- Typ bool.
- Wskaźniki.
- Operator modulo.
- Dzielenie całkowite.

*/


bool dzielenie(int a, int b, int *iloraz, int *reszta) {
    if (a == 0 || b == 0) {
        printf("Dzielenie przez zero!");
        return false;
    }
    *iloraz = a / b;
    *reszta = a % b;
    return true;
}

void zadanie15(void) {

    int a = 0;
    printf("Podaj a: ");
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int b = 0;
    printf("Podaj b: ");
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int iloraz = 0;
    int reszta = 0;

    if (dzielenie(a, b, &iloraz, &reszta) == true) {
        printf("Iloraz: %d\nReszta: %d", iloraz, reszta);
    }

}


/*
=========================================================
ZADANIE 16 - SORTOWANIE TRZECH LICZB
=========================================================

Napisz funkcję:

void sortuj3(int *a, int *b, int *c);

Funkcja powinna:
1. Przyjmować adresy trzech zmiennych.
2. Ustawiać ich wartości w kolejności rosnącej.
3. Modyfikować oryginalne zmienne.

Przykład:

Podaj a: 9
Podaj b: 2
Podaj c: 5

Przed:
9 2 5

Po:
2 5 9

Wymagania:
- Funkcja void.
- Wskaźniki.
- Instrukcje if.
- Wykorzystaj funkcję swap().

Nie używaj tablic.

*/

void sortuj3(int *a, int *b, int *c) {
    if (*b < *a) {
        swap(a, b);
    }
    if (*c < *b) {
        swap(b, c);
    }
    if (*b < *a) {
        swap(a, b);
    }
}

void zadanie16(void) {

    int a = 0;
    printf("Podaj a: ");
    if (scanf("%d", &a) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int b = 0;
    printf("Podaj b: ");
    if (scanf("%d", &b) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int c = 0;
    printf("Podaj c: ");
    if (scanf("%d", &c) != 1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    sortuj3(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}


/*
=========================================================
ZADANIE 17 - ANALIZA CYFR LICZBY
=========================================================

Napisz funkcję:

void analiza_liczby(int n,
                    int *suma,
                    int *liczba_cyfr);

Funkcja powinna:
1. Przyjmować nieujemną liczbę całkowitą.
2. Obliczać sumę jej cyfr.
3. Obliczać liczbę cyfr.
4. Zapisywać oba wyniki przez wskaźniki.

Przykład:

Podaj liczbe: 5824

Suma cyfr: 19
Liczba cyfr: 4

Drugi przykład:

Podaj liczbe: 0

Suma cyfr: 0
Liczba cyfr: 1

Wymagania:
- Funkcja void.
- Pętla while.
- Operator modulo.
- Dwa wskaźniki.

*/


void analiza_liczby(int n, int *suma, int *liczba_cyfr) {
    *suma = 0;
    *liczba_cyfr = 0;
    do {
        int cyfra = n % 10;
        *suma = *suma + cyfra;
        n = n / 10;
        *liczba_cyfr = *liczba_cyfr + 1;
    }
    while (n > 0);
}

void zadanie17(void) {

    int n = 0;
    printf("Podaj liczbe: ");
    if (scanf("%d", &n) !=1) {
        printf("Podano niepoprawna wartosc!");
        return;
    }
    if (n < 0) {
        printf("Podano niepoprawna wartosc!");
        return;
    }

    int suma = 0;
    int liczba_cyfr = 0;

    analiza_liczby(n, &suma, &liczba_cyfr);
    printf("Suma cyfr: %d\nLiczba cyfr: %d", suma, liczba_cyfr);



}


/*
=========================================================
ZADANIE 18 - SWAP BEZ ZMIENNEJ POMOCNICZEJ
=========================================================

Napisz funkcję:

void swap_bez_pomocniczej(int *a, int *b);

Funkcja powinna:
1. Przyjmować adresy dwóch zmiennych.
2. Zamieniać ich wartości miejscami.
3. Nie używać trzeciej zmiennej.

Przykład:

Podaj a: 12
Podaj b: 15

Po zamianie:

a = 15
b = 12

Wymagania:
- Funkcja void.
- Wskaźniki.
- Bez zmiennej pomocniczej.
- Bez tablic.

Wskazówka:
Możesz wykorzystać operator XOR (^).

Uwaga:
Uwzględnij przypadek, gdy oba wskaźniki
wskazują tę samą zmienną.

*/

void zadanie18(void) {

    // TUTAJ NAPISZ KOD

}


/*
=========================================================
ZADANIE 19 - LICZBA ARMSTRONGA
=========================================================

Napisz dwie funkcje:

int potega(int podstawa, int wykladnik);

bool czy_armstrong(int n);

Liczba Armstronga jest równa sumie swoich cyfr
podniesionych do potęgi równej liczbie cyfr.

Przykład:

153 = 1^3 + 5^3 + 3^3

153 = 1 + 125 + 27

153 = 153

Zatem 153 jest liczbą Armstronga.

Drugi przykład:

9474 = 9^4 + 4^4 + 7^4 + 4^4

9474 jest liczbą Armstronga.

Funkcja czy_armstrong() powinna:
1. Przyjmować nieujemną liczbę całkowitą.
2. Obliczać liczbę cyfr.
3. Obliczać sumę odpowiednich potęg cyfr.
4. Zwracać true albo false.

Przykład:

Podaj liczbe: 153

Liczba Armstronga.

Wymagania:
- Dwie funkcje.
- Typ bool.
- Pętle.
- Nie używaj pow().
- Funkcja potega() ma obliczać potęgę
  przez wielokrotne mnożenie.

*/

void zadanie19(void) {

    // TUTAJ NAPISZ KOD

}


/*
=========================================================
ZADANIE 20 - KOMPLEKSOWA ANALIZA LICZBY
=========================================================

Napisz funkcję:

void analizuj(int n,
              int *suma_cyfr,
              int *liczba_cyfr,
              int *najwieksza_cyfra,
              bool *czy_parzysta);

Funkcja powinna:
1. Przyjmować nieujemną liczbę całkowitą.
2. Obliczać sumę cyfr.
3. Obliczać liczbę cyfr.
4. Znajdować największą cyfrę.
5. Sprawdzać, czy liczba jest parzysta.
6. Zapisywać wszystkie wyniki przez wskaźniki.

Przykład:

Podaj liczbe: 5824

Suma cyfr: 19
Liczba cyfr: 4
Najwieksza cyfra: 8
Czy parzysta: TAK

Wymagania:
- Funkcja void.
- Wskaźniki int *.
- Wskaźnik bool *.
- Pętla while.
- Operator modulo.
- Bez zmiennych globalnych.
- Bez tablic.

*/

void zadanie20(void) {

    // TUTAJ NAPISZ KOD

}


/*
=========================================================
ZADANIE 21 - CO WYPISZE PROGRAM?
=========================================================

Przeanalizuj poniższy kod:

void funkcja(int a){
    a = a + 10;
    printf("%d ", a);
}

int main(){
    int a = 5;

    funkcja(a);

    printf("%d", a);

    return 0;
}

Pytania:

1. Co wypisze program?
2. Ile zmiennych a istnieje podczas
   wykonywania funkcji?
3. Czy zmienne mają takie same adresy?
4. Dlaczego wartość a w main() się nie zmienia?

W zadanie21():
1. Przepisz kod funkcji.
2. Uruchom program.
3. Sprawdź swoje odpowiedzi.

*/

void zadanie21(void) {

    // TUTAJ NAPISZ KOD

}




int main(void) {



    // zadanie1();
    // zadanie2();
    // zadanie3();
    // zadanie4();
    // zadanie5();

    // zadanie6();
    // zadanie7();
    // zadanie8();
    // zadanie9();
    // zadanie10();
    // zadanie11();
    // zadanie12();
    // zadanie13();
    // zadanie14();
    // zadanie15();


    // zadanie16();
    // zadanie17();
     zadanie18();
    // zadanie19();
    // zadanie20();
    // zadanie21();

    return 0;
}
