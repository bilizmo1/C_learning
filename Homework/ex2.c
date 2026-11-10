#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
TEMATY:
- scanf / printf i sprawdzanie danych
- if / else if / else
- switch / case
- modulo (%) i dzielenie calkowite (/)
- petle for, while, do while
- liczby pseudolosowe: rand(), srand()

INSTRUKCJA:
1. Przeczytaj polecenie nad wybrana funkcja.
2. Zastap komentarz TODO swoim rozwiazaniem.
3. W main() odkomentuj TYLKO JEDNO wywolanie.
4. Skompiluj: clang ex2.c -o ex2
5. Uruchom: ./ex2
6. Przed kolejnym zadaniem zakomentuj poprzednie wywolanie.

Funkcje sa celowo pozostawione do samodzielnego uzupelnienia.
W kazdej funkcji zwroc 0 przy poprawnym wykonaniu.
Przy blednych danych mozesz wypisac "Incorrect input" i zwrocic 1.
=========================================================
*/

/*
=========================================================
ZADANIE 1 - LICZBY OD 1 DO N 
=========================================================
Pobierz dodatnia liczbe calkowita n. Wypisz liczby od 1 do n,
oddzielone spacjami. Na koncu wypisz ich sume.
Przyklad:
Podaj n: 5
1 2 3 4 5
Suma: 15
*/
int zadanie1(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 2 - ODLICZANIE (while)
=========================================================
Pobierz nieujemna liczbe n. Wypisz liczby od n do 0
w kolejnosci malejacej, oddzielone spacjami.
Przyklad:
Podaj n: 4
4 3 2 1 0
*/
int zadanie2(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 3 - PODZIELNOSC PRZEZ 3 I 5
=========================================================
Pobierz dodatnia liczbe n. Wypisz liczby od 1 do n,
ktore sa jednoczesnie podzielne przez 3 i 5. Policz je.
Przyklad:
Podaj n: 50
15 30 45
Liczba znalezionych: 3
Wymagania: for, if, %.
*/
int zadanie3(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 4 - SUMA CYFR LICZBY
=========================================================
Pobierz nieujemna liczbe calkowita. Oblicz sume jej cyfr.
Dla zera wynik powinien wynosic 0.
Przyklad:
Podaj liczbe: 4072
Suma cyfr: 13
Wymagania: while, %, /.
*/
int zadanie4(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 5 - LICZBA CYFR I ICH PARZYSTOSC
=========================================================
Pobierz nieujemna liczbe calkowita. Policz jej cyfry
parzyste i nieparzyste. Pamietaj, ze 0 jest cyfra parzysta.
Przyklad:
Podaj liczbe: 12045
Parzyste: 3
Nieparzyste: 2
Wskazowka: dla liczby 0 trzeba rozpatrzyc jeden znak cyfrowy.
*/
int zadanie5(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 6 - LICZBA DODATNIA, UJEMNA CZY ZERO? (if)
=========================================================
Pobierz liczbe calkowita x. Wypisz jeden komunikat:
"Liczba dodatnia", "Liczba ujemna" lub "Zero".
Przyklad:
Podaj x: -8
Liczba ujemna
Wymagania: if / else if / else.
*/
int zadanie6(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 7 - OCENA Z PUNKTOW (if / else if)
=========================================================
Pobierz wynik testu od 0 do 100 punktow.
Przydziel ocene wedlug progow:
0-49: 2; 50-69: 3; 70-84: 4; 85-94: 5; 95-100: 6.
Poza zakresem wypisz "Incorrect input".
Przyklad:
Podaj punkty: 87
Ocena: 5
*/
int zadanie7(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 8 - NAJWIEKSZA Z TRZECH LICZB (if)
=========================================================
Pobierz trzy liczby calkowite a, b, c. Wypisz najwieksza.
Rozwiaz bez tablic i bez funkcji bibliotecznych max.
Przyklad:
Podaj a b c: 8 15 12
Najwieksza: 15
*/
int zadanie8(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 9 - ROK PRZESTEPNY (if)
=========================================================
Pobierz dodatni rok. Sprawdz, czy jest przestepny.
Rok jest przestepny, gdy jest podzielny przez 400 albo
jest podzielny przez 4 i nie jest podzielny przez 100.
Przyklad:
Podaj rok: 2000
Rok przestepny
*/
int zadanie9(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 10 - DNI TYGODNIA (switch / case)
=========================================================
Pobierz liczbe od 1 do 7. Wypisz nazwe dnia tygodnia
(1 = poniedzialek, 7 = niedziela).
Dla liczby spoza zakresu wypisz "Incorrect input".
Przyklad:
Podaj numer dnia: 6
sobota
Wymagania: switch / case / default.
*/
int zadanie10(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 11 - PROSTY KALKULATOR (switch / case)
=========================================================
Pobierz dwie liczby rzeczywiste oraz znak operacji:
+ (dodawanie), - (odejmowanie), * (mnozenie), / (dzielenie).
Wypisz wynik z dokladnoscia do 2 miejsc po przecinku.
Nie pozwol na dzielenie przez zero.
Przyklad:
Podaj dwie liczby: 8 2
Podaj operacje: /
Wynik: 4.00
Wymagania: switch / case.
*/
int zadanie11(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 12 - MIESIAC I LICZBA DNI (switch)
=========================================================
Pobierz numer miesiaca (1-12) oraz rok dodatni.
Wypisz liczbe dni w tym miesiacu, uwzgledniajac
przestepnosc lutego.
Przyklad:
Podaj miesiac i rok: 2 2024
Liczba dni: 29
Wymagania: switch oraz if.
*/
int zadanie12(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 13 - MENU FIGUR (switch)
=========================================================
Wyswietl menu:
1 - pole kwadratu
2 - pole prostokata
3 - pole trojkata
Pobierz wybor, a potem potrzebne wymiary rzeczywiste.
Wypisz pole do 2 miejsc po przecinku. Wymiary musza byc > 0.
Przyklad:
Wybor: 2
Podaj a i b: 3 4
Pole: 12.00
Wymagania: switch / case, if.
*/
int zadanie13(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 14 - TABLICZKA MNOZENIA (for)
=========================================================
Pobierz liczbe calkowita n od 1 do 10. Wypisz jej
kolejne iloczyny przez 1, 2, ..., 10.
Przyklad:
Podaj n: 3
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30
*/
int zadanie14(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 15 - LICZBA PIERWSZA (for + if)
=========================================================
Pobierz liczbe calkowita n >= 2. Sprawdz, czy jest pierwsza.
Wskazowka: wystarczy szukac dzielnikow d, dla ktorych
d <= n / d (zamiast uzywac pierwiastka).
Przyklad:
Podaj n: 29
Liczba pierwsza
*/
int zadanie15(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 16 - ZGADYWANIE LICZBY (while + rand)
=========================================================
Wylosuj liczbe calkowita od 0 do 100. Uzytkownik ma
maksymalnie 10 prob, aby ja odgadnac.
Po kazdej nietrafionej probie wypisz "za duzo" albo
"za malo". Po trafieniu wypisz "wygrales" i zakoncz.
Po 10 nieudanych probach wypisz "przegrales".
Przyklad (wylosowana liczba 20):
Zgadnij: 64
za duzo
Zgadnij: 10
za malo
Zgadnij: 20
wygrales
Wskazowka: srand((unsigned)time(NULL)); rand() % 101.
*/
int zadanie16(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 17 - DZIESIEC LICZB LOSOWYCH
=========================================================
Wylosuj i wypisz 10 liczb calkowitych od 10 do 20
wlacznie. Oblicz ich sume oraz srednia do 2 miejsc.
Przyklad (liczby sa losowe):
12 19 10 15 20 11 17 14 16 13
Suma: 147
Srednia: 14.70
Wymagania: for, rand(), operator %.
*/
int zadanie17(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 18 - LOSOWANIE DO TRAFIENIA W PRZEDZIAL
=========================================================
Losuj liczby calkowite z zakresu -1000 do 1000.
Wypisuj kazda w nowej linii. Zakoncz, gdy wylosowana
liczba bedzie nalezec do przedzialu [100, 200].
Na koncu wypisz liczbe wykonanych losowan.
Przyklad (losowania przykladowe):
-34
521
150
Liczba losowan: 3
Wymagania: do while lub while, rand(), if.
*/
int zadanie18(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 19 - SUMOWANIE LICZB RZECZYWISTYCH
=========================================================
Pobierz liczbe calkowita n z zakresu 1-10.
Wylosuj n liczb rzeczywistych z zakresu [-5.0, 5.0].
Wypisz kazda do 6 miejsc po przecinku, a sume do 4.
Przyklad (wyniki losowe):
Podaj n: 3
1.250000
-2.500000
4.000000
Suma: 2.7500
Wskazowka: rand() / (double)RAND_MAX daje [0, 1].
*/
int zadanie19(void) {
    // TODO
    return 0;
}

/*
=========================================================
ZADANIE 20 - BANKOMAT (switch + while + if)
=========================================================
Ustaw saldo poczatkowe na 500.00 zl.
W petli wyswietlaj menu:
1 - sprawdz saldo
2 - wplata
3 - wyplata
0 - zakoncz
Po wybraniu 2 lub 3 pobierz dodatnia kwote.
Nie pozwalaj wyplacic wiecej niz wynosi saldo.
Po kazdej operacji pokaz menu ponownie.
Przyklad:
Wybor: 2
Podaj kwote: 100
Saldo: 600.00
Wybor: 3
Podaj kwote: 200
Saldo: 400.00
Wybor: 0
Do widzenia!
Wymagania: switch / case, while, if.
*/
int zadanie20(void) {
    // TODO
    return 0;
}

/*
=========================================================
                    FUNKCJA MAIN
=========================================================
Odkomentuj TYLKO JEDNO zadanie. Pozostale zostaw
zakomentowane. Mozesz zamienic "return 0" na
"return zadanieX();", aby przekazywac kod bledu.

Pamiętaj o typie zwracanym w funkcji!!
=========================================================
*/
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
    // zadanie18();
    // zadanie19();
    // zadanie20();
    return 0;
}
