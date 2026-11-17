#include <stdio.h>

/*
=========================================================
       PRACA DOMOWA - TABLICE DWUWYMIAROWE W JEZYKU C
=========================================================

TEMAT:
- Deklarowanie tablic dwuwymiarowych
- Indeksowanie: tablica[wiersz][kolumna]
- Petle zagniezdzone for
- Wczytywanie i wypisywanie macierzy
- Suma, srednia, minimum i maksimum

INSTRUKCJA:
1. Rozwiaz kazde zadanie wewnatrz odpowiedniej funkcji.
2. Nie zmieniaj nazw funkcji ani funkcji main().
3. Odkomentuj w main() jedno wywolanie i uruchom program.
4. W zadaniach z wczytywaniem sprawdz wynik scanf().

KOMPILACJA: clang ex4_arr2d.c -o ex4_arr2d
URUCHOMIENIE: ./ex4_arr2d
=========================================================
*/

/*
ZADANIE 1 - WYSWIETLANIE MACIERZY
Utworz tablice 2x3 o wartosciach:
1 2 3
4 5 6
Wypisz ja w dwoch wierszach, zachowujac uklad macierzy.
Wymagania: dwie petle for, tablica[i][j].
*/
void zadanie1(void) {
    int tablica[2][3] = {1, 2, 3,
                         4, 5, 6};
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }
}

/*
ZADANIE 2 - WCZYTYWANIE MACIERZY
Wczytaj 6 liczb calkowitych do tablicy 2x3.
Nastepnie wypisz tablice w dwoch wierszach po trzy liczby.
Jesli scanf nie odczyta liczby, wypisz "Incorrect input"
i zakoncz funkcje.
Przyklad wejscia: 7 2 9 4 1 8
Przyklad wyjscia:
7 2 9
4 1 8
*/
void zadanie2(void) {
    int macierz[2][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d ", macierz[i][j]);
        }
        printf("\n");
    }
}

/*
ZADANIE 3 - SUMA WSZYSTKICH ELEMENTOW
Wczytaj 9 liczb do tablicy 3x3.
Oblicz i wypisz sume wszystkich elementow macierzy.
Przyklad wejscia:
1 2 3
4 5 6
7 8 9
Wynik: Suma: 45
*/
void zadanie3(void) {
    int macierz[3][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    int suma = 0;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            suma = suma + macierz[i][j];
        }
    }
    printf("%d", suma);
}

/*
ZADANIE 4 - LICZBY PARZYSTE
Wczytaj 8 liczb do tablicy 2x4.
Policz, ile elementow jest parzystych, i wypisz ich liczbe.
Pamietaj: zero jest liczba parzysta.
Przyklad wejscia:
1 2 3 4
0 5 6 7
Wynik: Parzyste: 4
*/
void zadanie4(void) {
    int macierz[2][4] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    int ilosc_parzystych = 0;
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
            if (macierz[i][j] % 2 == 0) {
                ilosc_parzystych++;
            }
        }
    }
    printf("Parzyste: %d", ilosc_parzystych);
}

/*
ZADANIE 5 - NAJWIEKSZY ELEMENT
Wczytaj 9 liczb do tablicy 3x3.
Znajdz i wypisz najwieksza wartosc.
Program musi dzialac rowniez dla samych liczb ujemnych.
Nie sortuj tablicy.
Przyklad wejscia:
-8 -3 -5
-2 -9 -7
-6 -4 -1
Wynik: Max: -1
*/
void zadanie5(void) {
    int macierz[3][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    int max = macierz[0][0];
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (macierz[i][j] > max) {
                max = macierz[i][j];
            }
        }
    }
    printf("Max: %d", max);
}

/*
ZADANIE 6 - SUMA KAZDEGO WIERSZA
Wczytaj 9 liczb do tablicy 3x3.
Oblicz i wypisz osobno sume kazdego wiersza.
Przyklad wejscia:
1 2 3
4 5 6
7 8 9
Wynik:
Wiersz 0: 6
Wiersz 1: 15
Wiersz 2: 24
*/
void zadanie6(void) {
    int macierz[3][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        int suma_wiersza = 0;
        for (int j = 0 ; j < 3 ; j++) {
            suma_wiersza = suma_wiersza + macierz[i][j];

        }
        printf("Wiersz %d: %d\n", i, suma_wiersza);
    }
}

/*
ZADANIE 7 - SUMA KAZDEJ KOLUMNY
Wczytaj 9 liczb do tablicy 3x3.
Oblicz i wypisz osobno sume kazdej kolumny.
Przyklad wejscia:
1 2 3
4 5 6
7 8 9
Wynik:
Kolumna 0: 12
Kolumna 1: 15
Kolumna 2: 18
*/
void zadanie7(void) {
    int macierz[3][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        int suma_kolumn = 0;
        for (int j = 0 ; j < 3 ; j++) {
            suma_kolumn = suma_kolumn + macierz[j][i];
        }
        printf("Kolumna: %d: %d\n", i, suma_kolumn);
    }
}

/*
ZADANIE 8 - PRZEKATNA GLOWNA
Wczytaj 9 liczb do tablicy 3x3.
Wypisz elementy przekatnej glownej (indeksy [0][0], [1][1], [2][2])
oraz oblicz ich sume.
Przyklad wejscia:
1 2 3
4 5 6
7 8 9
Wynik: Przekatna: 1 5 9; Suma: 15
*/
void zadanie8(void) {
    int macierz[3][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    printf("Przekatna: ");
    int suma_przekatnych = 0;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (i == j) {
                printf("%d ", macierz[i][j]);
                suma_przekatnych = suma_przekatnych + macierz[i][j];
            }
        }
    }
    printf("Suma: %d", suma_przekatnych);
}

/*
ZADANIE 9 - ZAMIANA DWOCH WIERSZY
Wczytaj 9 liczb do tablicy 3x3.
Zamien miejscami pierwszy i ostatni wiersz W TEJ SAMEJ tablicy.
Nie tworz drugiej tablicy. Wypisz wynikowa macierz.
Przyklad wejscia:
1 2 3
4 5 6
7 8 9
Wynik:
7 8 9
4 5 6
1 2 3
*/
void zadanie9(void) {
    int macierz[3][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            int pierwszy_wiersz = macierz[0][j];
            macierz[0][j] = macierz[2][j];
            macierz[2][j] = pierwszy_wiersz;
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d ", macierz[i][j]);
        }
        printf("\n");
    }
}

/*
ZADANIE 10 - TRANSPOZYCJA MACIERZY (SREDNIE)
Wczytaj 6 liczb do tablicy a o wymiarach 2x3.
Utworz druga tablice b o wymiarach 3x2, w ktorej
b[j][i] = a[i][j]. Wypisz obie macierze.
Przyklad wejscia (a):
1 2 3
4 5 6
Wynik (b):
1 4
2 5
3 6
*/
void zadanie10(void) {
    int macierz[2][3] = {0};
    printf("Podaj macierz:\n");
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (scanf("%d", &macierz[i][j]) != 1) {
                printf("Incorrect input");
                return;
            }
        }
    }
    printf("\n");
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d ", macierz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int macierz_transponowany[3][2] = {0};
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 2 ; j++) {
            macierz_transponowany[i][j] = macierz[j][i];
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 2; j++) {
            printf("%d ", macierz_transponowany[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    // Odkomentuj tylko jedno zadanie:
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

    return 0;
}
