/*
 * C - 20 ZADAŃ PRZYGOTOWUJĄCYCH DO KOLOKWIUM 
 *

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 01 - Macierz w równych kolumnach
 * 10 min | podstawowe
 *
 * Wczytaj 12 liczb całkowitych do macierzy int a[3][4]. Wypisz macierz w
 * trzech wierszach. Każde pole ma mieć szerokość 4 znaków i być oddzielone
 * spacją. Następnie wypisz sumę wszystkich elementów oraz liczbę elementów
 * ujemnych.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Dane: 1 2 3 4 / -1 -2 -3 -4 / 10 20 30 40. Wynik: suma = 100, ujemne = 4.
 * Znak / oznacza tu nowy wiersz danych.
 *
 * Uwzględnij: same zera, same liczby ujemne. Nie używaj dodatkowej tablicy.
 * ========================================================================
 */
int zadanie_01(void)
{

    int macierz[3][4] = {0};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return 1;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            printf("%4d ", macierz[i][j]);
        }
        printf("\n");
    }
    int suma_wszystkich_elementow = 0;
    int ilosc_liczb_ujemnych = 0;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            suma_wszystkich_elementow = suma_wszystkich_elementow + macierz[i][j];
            if (macierz[i][j] < 0) {
                ilosc_liczb_ujemnych++;
            }
        }
    }
    printf("Suma = %d, Ujemne = %d\n", suma_wszystkich_elementow, ilosc_liczb_ujemnych);

    puts("Zadanie 01: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 02 - Losowanie i podzielność
 * 15 min | podstawowe
 *
 * Wypełnij macierz 4 x 5 liczbami losowymi z domkniętego przedziału [10, 99];
 * powtórzenia są dozwolone. Wypisz ją, a następnie zamień na 0 każdy element
 * podzielny przez 3 LUB 7. Wypisz zmodyfikowaną macierz i liczbę zamienionych
 * pól. Element podzielny przez obie liczby licz tylko raz.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Dla kontrolnego wiersza 12 14 21 25 98 wynik to 0 0 0 25 0; zamieniono
 * 4 pola.
 *
 * Zainicjalizuj generator tylko raz. Przetestuj osobno liczby 21, 25 i 98.
 * ========================================================================
 */
int zadanie_02(void)
{
    int macierz[4][5] = {0};
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            int losowa_liczba = 10 + rand() % (99 - 10 + 1);
            macierz[i][j] = losowa_liczba;
            }
        }
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            printf("%4d ", macierz[i][j]);
        }
        printf("\n");
    }
    int liczba_zmienionych_pol = 0;
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            if (macierz[i][j] % 3 == 0 || macierz[i][j] % 7 == 0) {
                macierz[i][j] = 0;
                liczba_zmienionych_pol++;
            }
        }
    }
    printf("\n");
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            printf("%4d ", macierz[i][j]);
        }
        printf("\n");
    }
    printf("Zamieniono %d pol/pola\n", liczba_zmienionych_pol);

    puts("Zadanie 02: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 03 - Różne liczby w tablicy
 * 20 min | średnie
 *
 * Wylosuj 15 różnych liczb z przedziału [1, 30] do tablicy jednowymiarowej.
 * Każdą nową propozycję porównaj z już zapisanymi elementami. Odrzuć duplikat
 * i ponów losowanie. Wypisz tablicę oraz liczbę wszystkich prób losowania,
 * także odrzuconych.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Przy propozycjach 4, 7, 4, 9 pierwsze trzy zapisane liczby to 4, 7, 9;
 * liczba prób wynosi 4.
 *
 * Nie używaj sortowania ani tablicy pomocniczej. Sprawdzaj tylko zapełnioną
 * część tablicy.
 * ========================================================================
 */
int zadanie_03(void)
{
    int tablica[15] = {0};
    for (int i = 0 ; i < 15 ; i++) {
        tablica[i] = 1 + rand() % (30 - 1 + 1);;
    }
    int liczba_prob = 0;
    for (int i = 0 ; i < 15 ; i++) {
        for (int j = 0 ; j < 15 ; j++) {
            if (tablica[i] == tablica[j]) {
                tablica[i] = 1 + rand() % (30 - 1 + 1);;
            }
            else {
                printf("%d, ", tablica[i]);
            }
            liczba_prob++;
        }
    }

    puts("Zadanie 03: uzupelnij rozwiazanie.");
    return 0;
} //ZLE

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 04 - Losowanie bez powtórzeń w macierzy
 * 25 min | średnie
 *
 * Wypełnij macierz 5 x 5 różnymi liczbami z przedziału [1, 40]. Liczba nie
 * może powtarzać się nigdzie w macierzy. Wypisz wynik w polach o szerokości
 * 3. Znajdź minimum i maksimum oraz ich pozycje (wiersz, kolumna), numerowane
 * od 0.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Po losowaniu sprawdź: dokładnie 25 pól, wszystkie wartości od 1 do 40,
 * brak duplikatów.
 * Dla kontrolnej macierzy 2 x 2: 8 3 / 12 6 minimum leży w (0, 1),
 * maksimum w (1, 0).
 *
 * Porównuj nową liczbę wyłącznie z wcześniej zapisanymi polami. Nie czytaj
 * niezainicjalizowanej pamięci.
 * ========================================================================
 */
int zadanie_04(void)
{
    int macierz[5][5] = {8, 3, 12, 6};
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            macierz[i][j] = 1 + rand() % (40 - 1 + 1);
        }
    }
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            printf("%3d ", macierz[i][j]);
        }
        printf("\n");
    }
    int minimum = macierz[0][0];
    int indeks_i_minimum = 0;
    int indeks_j_minimum = 0;
    int maksimum = macierz[0][0];
    int indeks_i_maksimum = 0;
    int indeks_j_maksimum = 0;
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            if (macierz[i][j] < minimum) {
                minimum = macierz[i][j];
                indeks_i_minimum = i;
                indeks_j_minimum = j;
            }
            if (macierz[i][j] > maksimum) {
                maksimum = macierz[i][j];
                indeks_i_maksimum = i;
                indeks_j_maksimum = j;
            }
        }
    }
    printf("Minimum leży w (%d, %d), Maksimum leży w (%d, %d)\n", indeks_i_minimum, indeks_j_minimum, indeks_i_maksimum, indeks_j_maksimum);

    puts("Zadanie 04: uzupelnij rozwiazanie.");
    return 0;
} //Brak podpunktu - liczby nie moga sie powtarzac

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 05 - Odbicie lewo-prawo
 * 15 min | średnie
 *
 * Wczytaj macierz 3 x 5. Odwróć kolejność elementów w każdym wierszu,
 * zamieniając je parami w tej samej macierzy. Wypisz macierz przed i po
 * operacji.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Wiersz 1 2 3 4 5 zmienia się w 5 4 3 2 1.
 * Środkowy element pozostaje na miejscu.
 *
 * Nie twórz drugiej macierzy ani pomocniczego wiersza; pojedyncza zmienna
 * do zamiany jest dozwolona.
 * ========================================================================
 */
int zadanie_05(void)
{
    int macierz[3][5] = {0};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return 1;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            printf("%d ", macierz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            int pierwsz_wiersz = macierz[i][0];
            int drugi_wierwsz = macierz[i][1];
            macierz[i][0] = macierz[i][4];
            macierz[i][4] = pierwsz_wiersz;
            macierz[i][1] = macierz[i][3];
            macierz[i][3] = drugi_wierwsz;
        }
    }
    printf("\n");
    for (int i = 0 ; i < 3 ; i++){
            for (int j = 0 ; j < 5 ; j++) {
                printf("%d ", macierz[i][j]);
            }
        printf("\n");
        }

    puts("Zadanie 05: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 06 - Odbicie góra-dół
 * 15 min | średnie
 *
 * Wczytaj macierz 5 x 3. Odwróć kolejność jej wierszy bez zmieniania
 * kolejności elementów wewnątrz wiersza. Zrób to w miejscu, zamieniając
 * pojedyncze elementy. Wypisz stan przed i po operacji.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Dla 1 2 3 / 4 5 6 / 7 8 9 wynik to 7 8 9 / 4 5 6 / 1 2 3
 * (mniejszy przypadek kontrolny).
 *
 * Bez dodatkowej tablicy. Sprawdź, czy środkowy wiersz macierzy 5 x 3
 * pozostaje niezmieniony.
 * ========================================================================
 */
int zadanie_06(void)
{
    int macierz[5][3] = {0};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return 1;
            }
        }
    }
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d ", macierz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {

        }
    }
    puts("Zadanie 06: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * A. Macierze i losowanie
 * ZADANIE 07 - Sumy wierszy i przekątnych
 * 20 min | średnie
 *
 * Wczytaj macierz 4 x 4. Oblicz sumę każdego wiersza, wskaż wiersz o
 * największej sumie oraz oblicz sumy obu przekątnych. Przy remisie wybierz
 * wiersz o najmniejszym indeksie. Indeksy licz od 0.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Dla kolejnych liczb 1..16 wpisanych wierszami sumy wierszy wynoszą
 * 10, 26, 42, 58. Wybrany indeks: 3. Każda przekątna ma sumę 34.
 *
 * Przetestuj macierz z samymi liczbami ujemnymi oraz remis sum wierszy.
 * ========================================================================
 */
int zadanie_07(void)
{
    int macierz[4][4] = {0};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            if (scanf("%d", macierz[i][j]) != 1) {
                printf("Incorrect input");
                return 1;
            }
        }
    }
    int suma_wiersza = 0;
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            int suma_wiersza = suma_wiersza + macierz[i][j];
        }
    }
    puts("Zadanie 07: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * B. Napisy i instrukcje ruchu
 * ZADANIE 08 - Walidacja instrukcji
 * 20 min | podstawowe
 *
 * Wczytaj cały wiersz tekstu o długości maksymalnie 100 znaków. Dozwolone są
 * wyłącznie G, D, L, P i !. Pusty tekst jest poprawny. Dla poprawnego tekstu
 * wypisz liczbę wystąpień każdego znaku i zakończ kodem 0.
 * Dla niedozwolonego znaku wypisz BLEDNY ZNAK i zwróć 1.
 * Zbyt długi tekst: ZA DLUGI TEKST i kod 2.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * G!LLP! daje G=1, D=0, L=2, P=1, !=2.
 * Tekst G L! jest błędny: spacja nie jest dozwolona.
 *
 * Usuń końcowy znak nowej linii dodany przez odczyt. Zadbaj o miejsce
 * na znak końca napisu i wykrycie przekroczenia limitu.
 * ========================================================================
 */
int zadanie_08(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 08: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * B. Napisy i instrukcje ruchu
 * ZADANIE 09 - Jeden ruch na klawiaturze
 * 15 min | podstawowe
 *
 * Utwórz klawiaturę 3 x 3 z cyframi 1..9 wpisanymi wierszami.
 * Wczytaj cyfrę startową 1..9 i jeden kierunek G, D, L lub P.
 * Wykonaj ruch. Jeśli wychodzi poza klawiaturę, pozostań na miejscu.
 * Wypisz końcową cyfrę. Nieprawidłowe dane zakończ komunikatem BLAD
 * i kodem 1.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Start 5, kierunek G: 2.
 * Start 1, kierunek L: 1.
 * Start 9, kierunek D: 9.
 *
 * Nie odwołuj się do macierzy przed sprawdzeniem granic nowej pozycji.
 * ========================================================================
 */
int zadanie_09(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 09: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * B. Napisy i instrukcje ruchu
 * ZADANIE 10 - Wędrówka bez zatwierdzania
 * 20 min | średnie
 *
 * Na klawiaturze 3 x 3 (cyfry 1..9 wierszami) rozpocznij od 5.
 * Wczytaj maksymalnie 100 znaków G, D, L, P.
 * Wykonaj wszystkie ruchy i wypisz końcową cyfrę oraz liczbę zablokowanych
 * ruchów. Ruch poza planszę nie zmienia pozycji.
 * Niedozwolony znak lub za długi wiersz: BLAD i kod 1.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * LLLGDD: końcowa cyfra 7, zablokowane ruchy 2.
 * Pusty tekst: cyfra 5 i 0 zablokowanych ruchów.
 *
 * Po każdym ruchu kontynuuj od aktualnej pozycji, nie od środka.
 * ========================================================================
 */
int zadanie_10(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 10: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * B. Napisy i instrukcje ruchu
 * ZADANIE 11 - Kod z wykrzyknikami
 * 25 min | średnie
 *
 * Rozbuduj klawiaturę o !, który dopisuje aktualną cyfrę do kodu wynikowego.
 * Zacznij od 5. Wczytaj maksymalnie 100 znaków G, D, L, P, !.
 * Kolejne wykrzykniki są dozwolone; ruchy po ostatnim ! też są dozwolone,
 * ale nie dopisują cyfry. Wypisz kod jako napis.
 * Brak ! oznacza pusty kod. Błędne wejście: BLAD i kod 1.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * GL!DP!LLLD!P! daje 1578.
 * !! daje 55.
 * G!D daje 2.
 *
 * Nie resetuj pozycji po !. Zarezerwuj miejsce na terminator napisu
 * wynikowego.
 * ========================================================================
 */
int zadanie_11(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 11: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * B. Napisy i instrukcje ruchu
 * ZADANIE 12 - Pełne sprawdzanie kodu
 * 30 min | trudniejsze
 *
 * Wczytaj instrukcję długości do 100 znaków, następnie oczekiwaną długość
 * kodu k (liczba całkowita 1..100). Użyj zasad zadania 11.
 * Sprawdź kolejno: limit tekstu i dozwolone znaki, a potem poprawność k
 * i zgodność k z liczbą !.
 * Błąd tekstu: BLEDNY TEKST, kod 1.
 * Błąd k lub liczby !: BLEDNA DLUGOSC, kod 2.
 * Dopiero po walidacji wypisz kod.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * L!DD! i k=2 daje 47.
 * G!P!L! i k=2: BLEDNA DLUGOSC.
 * GX! i k=8: BLEDNY TEKST (ten błąd ma pierwszeństwo).
 *
 * Sprawdź także k=0, k=101, brak ! i dwa kolejne !.
 * Nie wypisuj częściowego kodu przed walidacją.
 * ========================================================================
 */
int zadanie_12(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 12: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * B. Napisy i instrukcje ruchu
 * ZADANIE 13 - Robot na planszy z przeszkodami
 * 30 min | trudniejsze
 *
 * Plansza 5 x 5 ma wolne pola oznaczone 0 i przeszkody w polach
 * (1,2), (2,3), (3,1). Robot zaczyna w (2,2); indeksy od 0.
 * Wczytaj do 100 komend G, D, L, P.
 * Ruch poza planszę lub na przeszkodę jest zablokowany.
 * Wypisz końcowe współrzędne i liczbę ruchów zablokowanych.
 * Niepoprawny tekst: BLAD i kod 1.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * GPLD:
 * G blokuje przeszkoda,
 * P blokuje przeszkoda,
 * L prowadzi do (2,1),
 * D blokuje przeszkoda.
 * Wynik: (2,1), blokady=3.
 *
 * Najpierw sprawdź granice, potem zawartość pola.
 * Pusty tekst pozostawia robota w punkcie startowym.
 * ========================================================================
 */
int zadanie_13(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 13: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * C. Menu i transakcje
 * ZADANIE 14 - Portfel z menu
 * 20 min | średnie
 *
 * Zacznij z saldem 500.
 * Powtarzaj menu: 1 - wpłata, 2 - wypłata, 0 - koniec.
 * Dla wpłaty lub wypłaty wczytaj całkowitą kwotę 1..1000.
 * Wypłata nie może przekroczyć salda.
 * Niepoprawny zakres, brak środków lub nieznana opcja:
 * OPERACJA NIEDOZWOLONA, bez zmiany salda; wróć do menu.
 * Błąd odczytu liczby: kod 1.
 * Po udanej operacji wypisz saldo.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Wpłata 200 daje 700.
 * Wypłata 800 jest odrzucona, saldo nadal 700.
 * Wypłata 700 daje 0.
 *
 * Użyj long long na saldo; przyjmij, że suma wpłat w testach
 * nie przekroczy 1000000. Zero jako kwota nie kończy programu.
 * ========================================================================
 */
int zadanie_14(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 14: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * C. Menu i transakcje
 * ZADANIE 15 - Zakup w sklepie
 * 25 min | średnie
 *
 * Ceny trzech produktów wynoszą 12, 25, 40.
 * Stany magazynu: 10, 8, 5.
 * Saldo klienta: 200.
 *
 * Wczytaj indeks produktu 0..2 i ilość 1..100.
 * Jeśli produkt istnieje, jest dostępna ilość i wystarcza pieniędzy,
 * wykonaj zakup. Inaczej wypisz OPERACJA NIEDOZWOLONA i niczego
 * nie zmieniaj.
 * Błąd odczytu liczb: kod 1.
 * Wypisz końcowe saldo i wszystkie stany.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Zakup produktu 1 w ilości 3: saldo 125, stany 10, 5, 5.
 * Zakup produktu 2 w ilości 6 zostaje odrzucony.
 *
 * Najpierw sprawdź indeks, dopiero potem odczytuj cenę i stan magazynu.
 * Zadbaj o ilości 0 i -1.
 * ========================================================================
 */
int zadanie_15(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 15: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * C. Menu i transakcje
 * ZADANIE 16 - Jedna tura handlu
 * 30 min | trudniejsze
 *
 * Saldo początkowe: 1000.
 * Zasoby trzech aktywów: 5, 5, 5.
 * Ceny: 100, 200, 300.
 *
 * Najpierw wczytaj sprzedaż (indeks, ilość), potem zakup (indeks, ilość).
 * Indeks musi być 0..2, ilość 0..100; 0 pomija operację, ale indeks
 * nadal musi być poprawny.
 * Odrzuć niedozwoloną transakcję bez zmiany stanu i przejdź do kolejnej
 * operacji. Po każdej próbie wypisz saldo i zasoby.
 * Błąd odczytu liczb: kod 1.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Sprzedaż 2 2: saldo 1600, zasoby 5,5,3.
 * Następnie zakup 0 10: saldo 600, zasoby 15,5,3.
 *
 * Nie pozwalaj sprzedać więcej niż posiadasz ani kupić ponad saldo.
 * Odrzucona sprzedaż nie blokuje zakupu.
 * ========================================================================
 */
int zadanie_16(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 16: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * C. Menu i transakcje
 * ZADANIE 17 - Symulacja dziesięciu tur
 * 40 min | trudniejsze
 *
 * Rozbuduj zadanie 16 do maksymalnie 10 tur.
 * Na początku każdej tury losuj trzy ceny z [1,500];
 * ceny pozostają stałe do końca tury.
 * Saldo startowe 1000, zasoby po 5.
 * W turze: jedna próba sprzedaży, potem jedna próba zakupu;
 * ilości 0..100.
 * Po pełnej turze zakończ, jeśli saldo wynosi co najmniej 3000
 * albo najwyżej 100.
 * Wypisz numer zakończonej tury i powód zakończenia.
 * Pozostałe zasady jak w zadaniu 16.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Test z ustalonymi cenami 100,200,500:
 * sprzedaż 2 5 i zakup 0 0 dają saldo 3500,
 * więc program kończy się po pierwszej turze.
 *
 * Na czas testów podstaw stałe ceny.
 * Sprawdź granice salda 100 i 3000 oraz limit 10 tur.
 * ========================================================================
 */
int zadanie_17(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 17: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * D. Próbne kolokwium
 * ZADANIE 18 - Macierz: losowanie, filtr i obrót
 * 25 min | 2 pkt
 *
 * Wypełnij macierz 6 x 6 różnymi losowymi liczbami z [1,60].
 * Wypisz oryginał.
 * Zamień na 0 wszystkie wartości podzielne przez 4 LUB 9 i wypisz wynik.
 * Następnie obróć zmienioną macierz o 180 stopni w miejscu
 * i ponownie ją wypisz.
 * Każde pole wyświetlaj na 3 miejscach, ze spacją między polami.
 * Wolno używać pojedynczych zmiennych pomocniczych, bez drugiej macierzy.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Kontrola obrotu dla 2 x 3:
 * 1 2 3 / 4 5 6 zmienia się w 6 5 4 / 3 2 1.
 * W filtrze 36 jest zerowane tylko raz.
 *
 * Punktacja:
 * - format: 0,5;
 * - unikalne losowanie: 0,5;
 * - filtr: 0,5;
 * - obrót w miejscu: 0,5.
 * ========================================================================
 */
int zadanie_18(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 18: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * D. Próbne kolokwium
 * ZADANIE 19 - Zamek 4 x 4
 * 35 min | 3 pkt
 *
 * Klawiatura 4 x 4 zawiera znaki wpisane wierszami:
 * 1234 / 5678 / 9ABC / DEF0.
 * Startujesz na 6.
 *
 * Wczytaj do 500 znaków G,D,L,P,! i oczekiwaną długość kodu k od 1 do 500.
 * Ruch poza klawiaturę jest ignorowany; ! dopisuje aktualny znak.
 * Pozycja nie resetuje się.
 * Kolejne ! i ruchy po ostatnim ! są dozwolone.
 *
 * Zbyt długi tekst lub obcy znak: BLEDNY TEKST i kod 1.
 * Następnie sprawdź k i liczbę !; błąd: BLEDNA DLUGOSC i kod 2.
 * Poprawny kod wypisz jako napis.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * GL!DDP!P! i k=3 daje 1AB.
 * !! i k=2 daje 66.
 * PPD!DD! i k=2 daje C0.
 *
 * Punktacja:
 * - tekst i limit: 0,5;
 * - długość kodu: 0,5;
 * - ruchy, granice, zapis i wynik: 2.
 * ========================================================================
 */
int zadanie_19(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 19: uzupelnij rozwiazanie.");
    return 0;
}

/*
 * ========================================================================
 * D. Próbne kolokwium
 * ZADANIE 20 - Rynek trzech aktywów
 * 45 min | 4 pkt
 *
 * Start: saldo 1000 i po 5 jednostek trzech aktywów (indeksy 0..2).
 * Na początku każdej tury losuj ich ceny z [1,500] i wyświetl stan.
 * Wykonaj jedną próbę sprzedaży, potem jedną próbę zakupu
 * (indeks i ilość 0..100; ilość 0 pomija operację,
 * poprawny indeks nadal wymagany).
 *
 * Niedozwolona operacja wypisuje OPERACJA NIEDOZWOLONA,
 * nie zmienia stanu i zużywa daną próbę.
 * Po każdej próbie pokaż saldo i zasoby.
 * Błąd odczytu liczby: komunikat i kod 1.
 * Po pełnej turze zakończ, gdy saldo jest >=10000 lub <=100;
 * inaczej kontynuuj.
 *
 * PRZYKŁAD / TEST KONTROLNY:
 * Przy cenach 100,200,300 sprzedaż 1 5 daje saldo 2000 i zasoby 5,0,5;
 * zakup 2 4 daje saldo 800 i zasoby 5,0,9.
 * Testuj też odrzuconą sprzedaż i zakup za całe saldo.
 *
 * Punktacja:
 * - inicjalizacja, ceny i prezentacja: 0,5;
 * - transakcje i walidacja zakresów: 1,5;
 * - pętla i progi końca: 1;
 * - obsługa błędnego odczytu: 1.
 *
 * Użyj long long na saldo i wartości transakcji;
 * zakładaj, że testy mieszczą się w tym typie.
 * ========================================================================
 */
int zadanie_20(void)
{
    /* TODO: tutaj wpisz swoje rozwiązanie. */
    puts("Zadanie 20: uzupelnij rozwiazanie.");
    return 0;
}

int main(void)
{
    srand((unsigned int)time(NULL));

    /* Odkomentuj dokładnie jeden wiersz poniżej. */
    // return zadanie_01();
    // return zadanie_02();
    // return zadanie_03();
    // return zadanie_04();
    // return zadanie_05();
     return zadanie_06();
    /* return zadanie_07(); */
    /* return zadanie_08(); */
    /* return zadanie_09(); */
    /* return zadanie_10(); */
    /* return zadanie_11(); */
    /* return zadanie_12(); */
    /* return zadanie_13(); */
    /* return zadanie_14(); */
    /* return zadanie_15(); */
    /* return zadanie_16(); */
    /* return zadanie_17(); */
    /* return zadanie_18(); */
    /* return zadanie_19(); */
    /* return zadanie_20(); */

    puts("Wybierz zadanie: odkomentuj jedno wywolanie w main().");
    return 0;
}
