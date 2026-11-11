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
    printf("Podaj n: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Podana niepoprawne dane");
        return 1;
    }
    if (n <= 0 ) {
        printf("Podana liczba musi byc dodatnia");
        return 2;
    }
    int suma = 0;
    for (int i = 1 ; i <= n; i++) {
        printf("%d ", i);
        suma = suma + i;
    }
    printf("\n");
    printf("Suma: %d", suma);
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
    printf("Podaj n: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Podana niepoprawne dane");
        return 1;
    }
    if (n < 0){
        printf("Podana liczba musi byc nieujemna");
        return 2;
    }
    while (n >= 0) {
        printf("%d ", n);
        n--;
    }
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
    printf("Podaj n: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Podana niepoprawne dane");
        return 1;
    }
    if (n <= 0) {
        printf("Podana liczba musi byc dodatnia");
        return 2;
    }
    int liczba_znalezionych = 0;
    for (int i = 1 ; i <= n ; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            liczba_znalezionych++;
        }
    }
    printf("\n");
    printf("Liczba znalezionych: %d", liczba_znalezionych);
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
    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1 ) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba < 0) {
        printf("Podana licba musi byc nieujemna");
        return 2;
    }
    int cyfra = 0;
    int suma = 0;
    while (liczba > 0) {
        cyfra = liczba % 10;
        suma = suma + cyfra;
        liczba = liczba / 10;
    }
    printf("Suma cyfr: %d", suma);
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
    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba < 0) {
        printf("Liczba musi byc nieujemna");
        return 2;
    }
    int parzyste = 0;
    int nieparzyste = 0;
    int cyfra;
    while (liczba >=0) {
        cyfra = liczba % 10;
        if (cyfra % 2 == 0) {
            parzyste++;
        }
        else {
            nieparzyste++;
        }
        liczba = liczba / 10;
    }
    printf("Parzyste: %d", parzyste);
    printf("\n");
    printf("Nieparzyste: %d", nieparzyste);
    return 0;
} // Nie udalo mi sie zrobic tego aby przy 0 i przy liczbie np 0000 pokazywalo ilosc liczb parzystych

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
    printf("Podaj liczbe: ");
    int liczba;
    if (scanf("%d", &liczba) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (liczba > 0) {
        printf("Liczba dodatnia");
    }
    else if (liczba < 0) {
        printf("liczba ujemna");
    }
    else {
        printf("Zero");
    }
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
    printf("Podaj punkty: ");
    int punkty;
    if (scanf("%d", &punkty) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (punkty >= 0 && punkty < 50) {
        printf("ocena: 2");
    }
    else if (punkty >= 50 && punkty < 70) {
        printf("ocena: 3");
    }
    else if (punkty >= 70 && punkty < 85) {
        printf("ocena: 4");
    }
    else if (punkty >= 85 && punkty < 95) {
        printf("ocena: 5");
    }
    else if (punkty >= 95 && punkty <= 100) {
        printf("ocena: 6");
    }
    else {
        printf("Incorrect input");
    }
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
    printf("Podaj a b c: ");
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) !=3 ) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    int max = a; 
    if (b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("Najwieksza: %d", max);



    /*if (a > b && a > c) {
        printf("Najwieksza: %d", a);
    }
    else if (a > b && a < c) {
        printf("Najwieksza: %d", c);
    }
    else if (a < b && a > c) {
        printf("Najwieksza: %d", b);
    }*/
    //Nie udalo mi sie tego zrobic (probowalem na rozne sposoby np z utworzeniem zmiennej max i przypisaniem wartosci poczatkowej a)
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
    printf("Podaj rok: ");
    int rok;
    if (scanf("%d", &rok) !=1 ) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (rok <= 0) {
        printf("Podany rok musi byc dodatni");
        return 2;
    }
    if (rok % 400 == 0 || (rok % 4 == 0 && rok % 100 != 0)) {
        printf("Rok przystepny");
    }
    else {
        printf("Rok nie jest przystepny");
    }
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
    printf("Podaj numer dnia: ");
    int numer;
    if (scanf("%d", &numer) != 1) {
        printf("Podano nieprawidlowe dane");
        return 1;
    }
    switch (numer) {
        case 1:
            printf("poniedzialek");
            break;
        case 2:
            printf("wtorek");
            break;
        case 3:
            printf("sroda");
            break;
        case 4:
            printf("czwartek");
            break;
        case 5:
            printf("piatek");
            break;
        case 6:
            printf("sobota");
            break;
        case 7:
            printf("niedziela");
            break;
        default:
            printf("Incorrect input");
            break;
    }
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
    printf("Podaj dwie liczby: ");
    float pierwsza_liczba, druga_liczba;
    if (scanf("%f %f", &pierwsza_liczba, &druga_liczba) != 2) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    printf("Podaj znak operacji: ");
    char znak;
    if (scanf(" %c", &znak) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    switch (znak) {
        case '+':{
            float suma = pierwsza_liczba + druga_liczba;
            printf("Wynik: %.2f", suma);
            break;
        }
        case '-':{
            float roznica = pierwsza_liczba - druga_liczba;
            printf("Wynik: %.2f", roznica);
            break;
        }
        case '*':{
            float iloczyn = pierwsza_liczba * druga_liczba;
            printf("Wynik: %.2f", iloczyn);
            break;
        }
        case '/':{
            float iloraz = pierwsza_liczba / druga_liczba;
            if (pierwsza_liczba == 0 || druga_liczba == 0) {
                printf("Nie mozna dzielic przez zero");
                return 2;
            }
            printf("Wynik: %.2f", iloraz);
            break;
        }
        default:
            printf("Podano niepoprawna operacje");
            break;
    }
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
    printf("Podaj miesiac i rok: ");
    int miesiac, rok;
    if (scanf("%d %d", &miesiac, &rok) != 2) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (rok <= 0 && miesiac <= 0) {
        printf("Podano niepoprawne dane: ");
        return 1;
    }
    switch (miesiac) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Liczba dni: 31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Liczba dni: 30");
            break;
        case 2:
            if (rok % 4 == 0 || (rok % 400 == 0 && rok % 100 != 0)) {
                printf("Liczba dni: 29");
            }
            else {
                printf("Liczba dni:  28");
            }
            break;
        default:
            printf("Podano niepoprawny miesiac");
            break;
    }
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
    printf("Wybor: ");
    int wybor;
    if (scanf("%d", &wybor) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    printf("Podaj a i b: ");
    float a, b;
    if (scanf("%f %f", &a, &b) != 2) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (a <= 0 || b <= 0) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    switch (wybor) {
        case 1:{
            if (a != b) {
                printf("Podano niepoprawne dane");
                return 1;
            }
            float pole_kwadratu = a * b;
            printf("Pole: %.2f", pole_kwadratu);
            break;
        }
        case 2:{
            float pole_prostokata = a * b;
            printf("Pole: %.2f", pole_prostokata);
            break;
        }
        /*case 3:
            float pole_trojkata =;
            printf("Pole: %.2f", pole_trojkata);
            break;*/ // Nie mam pojecia jaki wzor na pole trojkata tu wykorzystac
        default:
            printf("Podano niepoprawny numer operacji");
            break;
    }
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
    printf("Podaj n: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (n < 1 && n > 10) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    for (int i = 1 ; i <= 10 ; i++) {
        int wynik = n * i;
        printf("%d x %d = %d\n", n, i, wynik);
    }
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
    printf("Podaj n: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (n < 2) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    int ilosc_dzielnikow = 0;
    for (int i = 1 ; i <= n ; i++) {
        if (n % i == 0) {
            ilosc_dzielnikow++;
        }
    }
    if (ilosc_dzielnikow == 2) {
        printf("Liczba %d jest pierwsza", n);
    }
    else {
        printf("Liczba %d nie jest pierwsza", n);
    }
    return 0;
} //Nie zrozumialem wskazowki i musialem skorzystac z pomocy internetu (mysle tez ze to moglo byc przez zmeczenie bo robilem te zadania ciagiem a to bylo ostatnie a bledem okazalo sie to ze warunki ktore aktualnie sa poza petla byly w niej i pierwszym warunkiem petli bylo 2 zamiast 1)
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

    srand((unsigned)time(NULL)); // inicjalizacja 
    int losowa_liczba = rand() % 101;
    int ilosc_prob = 0;
    while (ilosc_prob <= 10) {
        printf("Zgadnij liczbe: ");
        int liczba;
        if (scanf("%d", &liczba) != 1) {
            printf("Podano niepoprawne dane");
            return 1;
        }
        if (liczba < 0 || liczba > 100) {
            printf("Podano niepoprawne dane");
            return 1;
        }
        if (liczba == losowa_liczba) {
            printf("wygrales\n");
            break;
        }
        if (liczba > losowa_liczba) {
            printf("za duzo\n");
            ilosc_prob++;
        }
        if (liczba < losowa_liczba) {
            printf("za malo\n");
            ilosc_prob++;
        }
        if (ilosc_prob == 10) {
            printf("przegrales");
            break;
        }
    }
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
    srand((unsigned)time(NULL));
    int suma = 0;
    for (int i = 0 ; i < 10; i++) {
        int losowa_liczba = 10 + rand() % 11;
        printf("%d ", losowa_liczba);
        suma = suma + losowa_liczba;
    }
    printf("\n");
    printf("Suma: %d", suma);
    printf("\n");
    float srednia = (float)suma / 10;
    printf("Srednia: %.2f", srednia);
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
    srand((unsigned)time(NULL));
    int liczba_losowan = 0;
    while (1) { //Musiałem podejrzec w internecie jak zrobic petle nieskonczona while
        int losowa_liczba = -1000 + rand() % 2001;
        printf("%d\n", losowa_liczba);
        liczba_losowan++;
        if (losowa_liczba >= 100 && losowa_liczba <= 200) {
            break;
        }
    }
    printf("Liczba losowan: %d", liczba_losowan);
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
    printf("Podaj n: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Podano niepoprawne dane");
        return 1;
    }
    if (n < 1 || n > 10) {
        printf("Podano bledny zakres");
        return 2;
    }
    srand((unsigned)time(NULL));
    double suma = 0;
    for (int i = 0 ; i < n ; i++) {
        double losowa_liczba = -5 + (rand() / (double)RAND_MAX) * 10; //Musialem sie wspomoc jak przeksztalcic ta funkcje aby losowala w zakresie od -5 do 5
        suma = suma + losowa_liczba;
        printf("%.6lf\n", losowa_liczba);
    }
    printf("Suma: %.4lf", suma);
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
    float saldo = 500.0f;
    while (1) {
        printf("1 - sprawdz saldo\n");
        printf("2 - wplata\n");
        printf("3 - wyplata\n");
        printf("0 - zakoncz\n");
        printf("Wybor: ");
        
        int wybor;
        if (scanf("%d", &wybor) != 1) {
            printf("Podano niepoprawne dane");
            return 1;
        }
        float kwota;
        switch (wybor) {
            case 1:
                printf("Saldo: %.2f", saldo);
                printf("\n");
                break;
            case 2:
                printf("Podaj kwote: ");
                if(scanf("%f", &kwota) !=1){
                    printf("Podano niepoprawne dane");
                    return 1; // exit(1);
                }
                if (kwota >= saldo) {
                    printf("Blad operacji");
                    return 1;
                }
                saldo = saldo + kwota;
                printf("Saldo: %.2f \n", saldo);
                break;
            case 3:
                printf("Podaj kwote: ");
                if(scanf("%f", &kwota) !=1){
                    printf("Podano niepoprawne dane");
                    return 1;
                }
                if (kwota >= saldo) {
                    printf("Blad operacji");
                }
                    saldo = saldo - kwota;
                    printf("Saldo: %.2f", saldo);
                    printf("\n");
                break;
            case 0:
                printf("Do widzenia!");
                return 0;
            default:
                printf("Podano bledny numer operacji");
                printf("\n");
                break;
        }
    }
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
     zadanie20();
    return 0;
}
