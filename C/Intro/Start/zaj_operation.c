#include <stdio.h>

/*
funkcja dodatkowa
aby uruchomić f.dodatkową -> wywołujemy ją w funkcji main

Szablon funkcji:

typ_zwracany nazwa_funkcji(argumenty){

    ciało funkcji
}
typ_zwracany -> typ jaki zwracamy do funkcji głownej:
void -> nic nie zwracamy 
int, double,float -> zwracamy wartosc 
tablica -> zwracamy tablica 

wskaźnik -> zwrcanie adresu w pamięci 


*/
/*
=========================================================
ZADANIE 7 - SUMA LICZB PODZIELNYCH PRZEZ 3 I 5
=========================================================

Napisz program, który:
1. Pobierze dodatnią liczbę całkowitą n.
2. Znajdzie wszystkie liczby od 1 do n, które są
   jednocześnie podzielne przez 3 i przez 5.
3. Wypisze znalezione liczby.
4. Obliczy ich sumę.
5. Policz, ile takich liczb znaleziono.

Przykład:

Podaj n: 50

Liczby podzielne przez 3 i 5:
15 30 45

Liczba znalezionych liczb: 3
Suma: 90


*/


int zadanie7(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 8 - NAJWIEKSZA CYFRA LICZBY
=========================================================

Napisz program, który:
1. Pobierze nieujemną liczbę całkowitą.
2. Sprawdzi wszystkie cyfry tej liczby.
3. Znajdzie największą cyfrę.
4. Wypisze wynik.

Przykład:

Podaj liczbe: 527394

Najwieksza cyfra: 9

Drugi przykład:

Podaj liczbe: 11121

Najwieksza cyfra: 2

Trzeci przykład:

Podaj liczbe: 0

Najwieksza cyfra: 0

Wskazówka:
- Ostatnią cyfrę uzyskasz przez % 10.
- Usuniesz ją przez / 10.
- Przechowuj największą znalezioną cyfrę
  w dodatkowej zmiennej.

Wymagania:
- Pętla while.
- Operator modulo.
- Dzielenie całkowite.
- Instrukcja if.

*/

int zadanie8(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 9 - ILE CYFR PARZYSTYCH I NIEPARZYSTYCH?
=========================================================

Napisz program, który:
1. Pobierze nieujemną liczbę całkowitą.
2. Sprawdzi każdą cyfrę podanej liczby.
3. Policz, ile cyfr jest parzystych.
4. Policz, ile cyfr jest nieparzystych.
5. Wypisze oba wyniki.

Przykład:

Podaj liczbe: 1234567

Liczba cyfr parzystych: 3
Liczba cyfr nieparzystych: 4

Drugi przykład:

Podaj liczbe: 204080

Liczba cyfr parzystych: 6
Liczba cyfr nieparzystych: 0

Uwaga:
Cyfra 0 jest parzysta.

Wymagania:
- Pętla while.
- Operator modulo.
- Instrukcja if / else.

*/

int zadanie9(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 10 - POTEGOWANIE BEZ BIBLIOTEKI MATH
=========================================================

Napisz program, który:
1. Pobierze liczbę całkowitą a.
2. Pobierze nieujemny wykładnik całkowity n.
3. Obliczy a podniesione do potęgi n.
4. Wypisze wynik.

Nie wolno korzystać z funkcji pow().

Przykład:

Podaj a: 2
Podaj n: 5

Wynik: 32

Drugi przykład:

Podaj a: 3
Podaj n: 4

Wynik: 81

Trzeci przykład:

Podaj a: 5
Podaj n: 0

Wynik: 1

Wskazówka:
Potęgowanie można wykonać przez
wielokrotne mnożenie.

Przykład:

2^4 = 2 * 2 * 2 * 2

Wymagania:
- Pętla for.
- Instrukcja if.
- Bez biblioteki math.h.

*/

int zadanie10(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 11 - CZY LICZBA JEST PALINDROMEM?
=========================================================

Napisz program, który:
1. Pobierze nieujemną liczbę całkowitą.
2. Odwróci kolejność jej cyfr.
3. Sprawdzi, czy liczba czytana od lewej
   do prawej jest taka sama jak od prawej
   do lewej.
4. Wypisze odpowiedni komunikat.

Przykład:

Podaj liczbe: 12321

Liczba jest palindromem.

Drugi przykład:

Podaj liczbe: 12345

Liczba nie jest palindromem.

Trzeci przykład:

Podaj liczbe: 1221

Liczba jest palindromem.

Wskazówka:
Zachowaj oryginalną liczbę w dodatkowej zmiennej.

Następnie odwróć liczbę i porównaj
wynik z oryginałem.

Wymagania:
- Pętla while.
- Operator modulo.
- Dzielenie całkowite.
- Instrukcja if / else.

*/

int zadanie11(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 12 - SILNIA LICZBY
=========================================================

Napisz program, który:
1. Pobierze nieujemną liczbę całkowitą n.
2. Obliczy silnię tej liczby.
3. Wypisze wynik.

Definicja:

n! = 1 * 2 * 3 * ... * n

Przykład:

Podaj n: 5

5! = 120

Drugi przykład:

Podaj n: 4

4! = 24

Trzeci przykład:

Podaj n: 0

0! = 1

Uwaga:
Dla 0 silnia wynosi 1.

Wymagania:
- Pętla for.
- Instrukcja if.
- Zmienna przechowująca wynik.

Dodatkowo:
Zastanów się, dlaczego dla dużych liczb
wynik może być niepoprawny.

*/

int zadanie12(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 13 - CZY LICZBA JEST PIERWSZA?
=========================================================

Napisz program, który:
1. Pobierze liczbę całkowitą n.
2. Sprawdzi, czy liczba jest pierwsza.
3. Wypisze odpowiedni komunikat.

Liczba pierwsza to liczba naturalna większa
od 1, która ma dokładnie dwa dodatnie dzielniki:
1 oraz samą siebie.

Przykład:

Podaj n: 7

Liczba 7 jest pierwsza.

Drugi przykład:

Podaj n: 12

Liczba 12 nie jest pierwsza.

Trzeci przykład:

Podaj n: 1

Liczba 1 nie jest pierwsza.

Wskazówka:
Sprawdź, czy istnieje liczba od 2 do n-1,
przez którą n dzieli się bez reszty.

Jeżeli znajdziesz taki dzielnik,
liczba nie jest pierwsza.

Wymagania:
- Pętla for.
- Operator modulo.
- Instrukcja if / else.
- Instrukcja break.

Dla chętnych:
Spróbuj sprawdzać dzielniki tylko do
pierwiastka z n, bez używania sqrt().

*/

int zadanie13(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 14 - NWD DWOCH LICZB
=========================================================

Napisz program, który:
1. Pobierze dwie dodatnie liczby całkowite a i b.
2. Znajdzie ich największy wspólny dzielnik.
3. Wypisze wynik.

Przykład:

Podaj a: 24
Podaj b: 36

NWD: 12

Drugi przykład:

Podaj a: 15
Podaj b: 25

NWD: 5

Trzeci przykład:

Podaj a: 7
Podaj b: 13

NWD: 1

Wskazówka:
Możesz sprawdzić kolejne liczby i znaleźć
największą, która dzieli jednocześnie a i b.

Wymagania:
- Pętla for lub while.
- Operator modulo.
- Instrukcja if.

Dla chętnych:
Rozwiąż zadanie drugi raz, wykorzystując
algorytm Euklidesa.

*/

int zadanie14(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 15 - TROJKAT Z GWIAZDEK
=========================================================

Napisz program, który:
1. Pobierze dodatnią liczbę całkowitą n.
2. Wypisze trójkąt z gwiazdek.
3. Liczba wierszy ma być równa n.

Przykład:

Podaj n: 5

*
**
***
****
*****

Drugi przykład:

Podaj n: 3

*
**
***

Wymagania:
- Dwie zagnieżdżone pętle for.
- Zewnętrzna pętla odpowiada za wiersze.
- Wewnętrzna pętla odpowiada za gwiazdki.

Dla chętnych:
Wypisz trójkąt odwrócony:

*****
****
***
**
*

*/

int zadanie15(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
ZADANIE 16 - LICZBY ARMSTRONGA
=========================================================

Napisz program, który:
1. Pobierze dodatnią liczbę trzycyfrową.
2. Rozdzieli ją na poszczególne cyfry.
3. Obliczy sumę sześcianów jej cyfr.
4. Sprawdzi, czy suma jest równa
   podanej liczbie.

Jeżeli tak, liczba jest liczbą Armstronga.

Przykład:

Podaj liczbe: 153

1^3 + 5^3 + 3^3 = 153

Liczba jest liczba Armstronga.

Drugi przykład:

Podaj liczbe: 123

1^3 + 2^3 + 3^3 = 36

Liczba nie jest liczba Armstronga.

Trzeci przykład:

Podaj liczbe: 370

3^3 + 7^3 + 0^3 = 370

Liczba jest liczba Armstronga.

Wskazówka:
Możesz pobierać kolejne cyfry przez % 10.

Sześcian cyfry obliczysz przez:

cyfra * cyfra * cyfra

Wymagania:
- Pętla while.
- Operator modulo.
- Dzielenie całkowite.
- Instrukcja if / else.

Uwaga:
W tym zadaniu sprawdzamy wyłącznie
liczby trzycyfrowe.

*/

int zadanie16(void) {

    // TODO: Napisz rozwiązanie.

    return 0;
}


/*
=========================================================
                    FUNKCJA MAIN
=========================================================

Odkomentuj TYLKO JEDNO zadanie, które chcesz uruchomić.

Przykład:

zadanie7();

Aby przejść do następnego zadania:
1. Zakomentuj zadanie7().
2. Odkomentuj zadanie8().
3. Uruchom program ponownie.

=========================================================
*/

int main(void) {

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

    return 0;
}