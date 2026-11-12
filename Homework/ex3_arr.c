#include <stdio.h>

/*
=========================================================
           PRACA DOMOWA - TABLICE W JEZYKU C - CZEŚĆ PIERWSZA
=========================================================

INSTRUKCJA:
1. Rozwiaz kazde zadanie wewnatrz odpowiedniej funkcji.
2. Nie zmieniaj nazw funkcji ani funkcji main().
3. Odkomentuj w main() jedno wywolanie i uruchom program.
4. W zadaniach z wczytywaniem sprawdz wynik scanf().
5. Nie korzystaj z sortowania ani dodatkowych bibliotek,
   chyba ze polecenie wyraznie na to pozwala.

KOMPILACJA: clang ex3_arr.c -o ex3_arr
URUCHOMIENIE: ./ex3_arr
=========================================================
*/

/*
ZADANIE 1 - WYSWIETLANIE TABLICY
Utworz tablice int o wartosciach {4, 8, 15, 16, 23, 42}.
Wypisz wszystkie elementy w jednym wierszu, oddzielone spacjami.
Wymagania: petla for, indeksowanie.
Przyklad: 4 8 15 16 23 42
*/
void zadanie1(void) {
    int tablica[6] = {4, 8, 15, 16, 23, 42};
    for (int i = 1 ; i <= 6 ; i++) {
        printf("%d ", tablica[i]);
    }
}

/*
ZADANIE 2 - CO DRUGI ELEMENT
Utworz tablice {3, 6, 9, 12, 15, 18, 21, 24}.
Wypisz elementy o indeksach parzystych (0, 2, 4, 6).
Przyklad: 3 9 15 21
*/
void zadanie2(void) {
    int tablica[8] = {3, 6, 9, 12, 15, 18, 21, 24};
    for (int i = 0 ; i < 8 ; i+=2) {
        printf("%d ", tablica[i]);
    }
}

/*
ZADANIE 3 - WCZYTYWANIE I WYPISYWANIE
Wczytaj 8 liczb calkowitych do tablicy i wypisz je w jednym wierszu.
Jesli scanf nie odczyta liczby, wypisz "Incorrect input" i zakoncz funkcje.
Przyklad wejscia: 5 2 9 1 7 3 8 4
Przyklad wyjscia: 5 2 9 1 7 3 8 4
*/
void zadanie3(void) {
    int tablica[8] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 8 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    printf("Podane liczby to: ");
    for (int i = 0 ; i < 8 ; i++) {
        printf("%d ", tablica[i]);
    }
}

/*
ZADANIE 4 - ODWROTNA KOLEJNOSC
Wczytaj 10 liczb calkowitych. Wypisz je od ostatniej do pierwszej.
Nie tworz drugiej tablicy.
Przyklad wejscia: 1 2 3 4 5 6 7 8 9 10
Przyklad wyjscia: 10 9 8 7 6 5 4 3 2 1
*/
void zadanie4(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    printf("Podane liczby to: ");
    for (int i = 9 ; i >= 0 ; i--) {
        printf("%d ", tablica[i]);
    }
}

/*
ZADANIE 5 - SUMA I SREDNIA
Wczytaj 10 liczb calkowitych. Oblicz ich sume i srednia.
Wypisz srednia z dokladnoscia do 2 miejsc po przecinku.
Przyklad wejscia: 1 2 3 4 5 6 7 8 9 10
Przyklad: Suma: 55, Srednia: 5.50
*/
void zadanie5(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1){
            printf("Incorrect input");
            return;
        }
    }
    int suma = 0;
    for (int i = 0 ; i < 10 ; i++) {
        suma = suma + tablica[i];
    }
    float srednia = (float)suma / 10;
    printf("Suma: %d, Srednia: %.2f", suma, srednia);
}

/*
ZADANIE 6 - LICZBY DODATNIE, UJEMNE I ZERA
Wczytaj 12 liczb calkowitych. Policz osobno liczby dodatnie,
ujemne oraz zera. Wypisz trzy liczniki.
Przyklad wejscia: -2 0 4 5 -1 0 7 -8 0 3 1 -6
Przyklad: Dodatnie: 5, Ujemne: 4, Zera: 3
*/
void zadanie6(void) {
    int tablica[12] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 12 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int dodatnia = 0;
    int ujemna = 0;
    int zero = 0;
    for (int i = 0 ; i < 12 ; i++) {
        if (tablica[i] > 0) {
            dodatnia++;
        }
        else if (tablica[i] < 0) {
            ujemna++;
        }
        else {
            zero++;
        }
    }
    printf("Dodatnie: %d, Ujemne: %d, Zera: %d", dodatnia, ujemna, zero);
}

/*
ZADANIE 7 - MINIMUM I MAKSIMUM
Wczytaj 10 liczb calkowitych. Znajdz najmniejsza i najwieksza.
Program musi poprawnie dzialac dla samych liczb ujemnych.
Nie sortuj tablicy.
Przyklad wejscia: -7 -2 -15 -1 -9 -4 -8 -3 -11 -6
Przyklad: Min: -15, Max: -1
*/
void zadanie7(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
        if (tablica[i] >= 0) {
            printf("Podane liczby musza byc ujemne");
            return;
        }
    }
    int min = tablica[0];
    int max = tablica[0];
    for (int i = 0 ; i < 10 ; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
        }
        if (tablica[i] > max) {
            max = tablica[i];
        }
    }
    printf("Min: %d, Max: %d", min, max);
}

/*
ZADANIE 8 - INDEKSY EKSTREMOW
Wczytaj 10 liczb. Wypisz najmniejsza i najwieksza wartosc
oraz indeks ich PIERWSZEGO wystapienia (indeksy od 0).
Przyklad wejscia: 5 2 9 2 7 9 1 1 4 6
Przyklad: Min: 1 indeks: 6; Max: 9 indeks: 2
*/
void zadanie8(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int min = tablica[0];
    int max = tablica[0];
    int indeks_min = 0;
    int indeks_max = 0;
    for (int i = 0 ; i < 10 ; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
            indeks_min = i;
        }
        if (tablica[i] > max) {
            max = tablica[i];
            indeks_max = i;
        }
    }
    printf("Min: %d indeks: %d; Max: %d indeks: %d", min, indeks_min, max, indeks_max);
}

/*
ZADANIE 9 - LICZBY PODZIELNE PRZEZ 3
Wczytaj 10 liczb. Wypisz wszystkie liczby podzielne przez 3
oraz ich liczbe. Zero rowniez jest podzielne przez 3.
Przyklad wejscia: 3 5 6 8 9 10 0 12 14 15
Przyklad: 3 6 9 0 12 15; Liczba: 6
*/
void zadanie9(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int liczba = 0;
    for (int i = 0 ; i < 10 ; i++) {
        if (tablica[i] % 3 == 0) {
            printf("%d ", tablica[i]);
            liczba++;
        }
    }
    printf("; Liczba: %d", liczba); //Nie wiem jak postawic znak - ';' aby byl bezposrednio za ostatnim wyrazem tablicy
}

/*
ZADANIE 10 - ZAMIANA MIEJSCAMI
Wczytaj 8 liczb. Zamien miejscami pierwszy i ostatni element,
a nastepnie wypisz cala tablice.
Przyklad wejscia: 1 2 3 4 5 6 7 8
Przyklad wyjscia: 8 2 3 4 5 6 7 1
*/
void zadanie10(void) {
    int tablica[8] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 8 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int pierwszy_indeks = tablica[0];
    int ostatni_indeks = tablica[7];
    tablica[0] = ostatni_indeks;
    tablica[7] = pierwszy_indeks;
    for (int i = 0 ; i < 8 ; i++) {
        printf("%d ", tablica[i]);
    }
}

/*
ZADANIE 11 - ELEMENTY WIEKSZE OD SREDNIEJ
Wczytaj 10 liczb calkowitych. Oblicz srednia, a nastepnie
wypisz wszystkie elementy scisle wieksze od sredniej.
Przyklad wejscia: 1 2 3 4 5 6 7 8 9 10
Srednia: 5.50; Elementy: 6 7 8 9 10
*/
void zadanie11(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int suma = 0;
    for (int i = 0 ; i < 10 ; i++) {
        suma = suma + tablica[i];
    }
    float srednia = (float)suma / 10;
    printf("Srednia: %.2f; Elementy: ", srednia);
    for (int i = 0 ; i < 10 ; i++) {
        if (tablica[i] > srednia) {
            printf("%d ", tablica[i]);
        }
    }
}

/*
ZADANIE 12 - WYSZUKIWANIE LICZBY
Wczytaj 10 liczb do tablicy, a potem jedna liczbe x.
Wypisz, ile razy x wystepuje oraz indeks pierwszego wystapienia.
Jesli liczby nie ma, wypisz indeks -1.
Przyklad: tablica 2 5 2 7 2 9 1 4 2 8; x = 2
Wynik: Liczba wystapien: 4; Pierwszy indeks: 0
*/
void zadanie12(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    printf("Podaj x: ");
    int x;
    if (scanf("%d", &x) !=1) {
        printf("Incorrect input");
        return;
    }
    int liczba_wystapien = 0;
    int indeks = 0;
    for (int i = 0 ; i < 10 ; i++) {
        if (x == tablica[i]) {
            liczba_wystapien++;
            if (liczba_wystapien == 1){
                indeks = i;
            }
        }else {
            indeks = -1;
        }
    }
    printf("Liczba wystapien: %d; Pierwszy indeks: %d", liczba_wystapien, indeks);
}

/*
ZADANIE 13 - DRUGA TABLICA (KWADRATY)
Wczytaj 8 liczb calkowitych do tablicy a.
Utworz tablice b, w ktorej b[i] = a[i] * a[i].
Wypisz zawartosc obu tablic.
Przyklad: a = 1 -2 3 -4 5 0 2 -1
         b = 1 4 9 16 25 0 4 1
*/
void zadanie13(void) {
    int tablica_a[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 8 ; i++) {
        if (scanf("%d", &tablica_a[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int tablica_b[10] = {};
    for (int i = 0 ; i < 8 ; i++) {
        tablica_b[i] = tablica_a[i] * tablica_a[i];
    }
    printf("a = ");
    for (int i = 0 ; i < 8 ; i++) {
        printf("%d ", tablica_a[i]);
    }
    printf("\nb = ");
    for (int i = 0 ; i < 8 ; i++) {
        printf("%d ", tablica_b[i]);
    }
}

/*
ZADANIE 14 - CZY TABLICA JEST ROSNACA?
Wczytaj 10 liczb. Sprawdz, czy kazdy kolejny element jest
SCISLE wiekszy od poprzedniego.
Wypisz "YES" albo "NO". Powtorzone wartosci oznaczaja "NO".
Przyklad: 1 2 3 4 5 6 7 8 9 10 -> YES
Przyklad: 1 2 2 4 5 6 7 8 9 10 -> NO
*/
void zadanie14(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int czy_rosnacy = 0;
    for (int i = 0 ; i < 10 ; i++) {
        printf("%d ", tablica[i]);
        if (tablica[i] > tablica[i + 1]) {
            czy_rosnacy = 1;
        }
        else {
            czy_rosnacy = 0;
        }
    }
    if (czy_rosnacy == 1) {
        printf("-> YES");
    }
    else {
        printf("-> NO");
    }
}

/*
ZADANIE 15 - NAJDLUZSZY CIAG ROSNACY
Wczytaj 10 liczb. Znajdz dlugosc najdluzszego spojnego fragmentu,
w ktorym kazda kolejna liczba jest scisle wieksza od poprzedniej.
Nie trzeba wypisywac samego fragmentu.
Przyklad: 3 5 7 1 2 3 4 0 8 9
Wynik: 4 (fragment 1 2 3 4)
*/
void zadanie15(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int wynik = 0;
    for (int i = 0 ; i < 10 ; i++) {
        int roznica = tablica[i + 1]- tablica[i];
        if (tablica[i + 1] > tablica[i] && roznica == 1) {
                wynik++;
        }
    }
    printf("Wynik: %d", wynik);
} //Nie dziala

/*
ZADANIE 16 - ODWROCENIE TABLICY W MIEJSCU
Wczytaj 10 liczb. Odwroc kolejnosc elementow W TEJ SAMEJ tablicy,
zamieniajac elementy parami. Wypisz zmodyfikowana tablice.
Nie tworz drugiej tablicy.
Przyklad: 1 2 3 4 5 6 7 8 9 10 -> 10 9 8 7 6 5 4 3 2 1
*/
void zadanie16(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
     if (scanf("%d", &tablica[i]) != 1){
            printf("Incorrect input");
            return;
    }
    }
    for (int i = 0 ; i < 10 ; i++) {
        tablica[i] = tablica[9 - i];
        printf("%d ", tablica[i]);
    }
} //Nie dziala

/*
ZADANIE 17 - USUWANIE POWTORZEN PRZY WYPISYWANIU
Wczytaj 10 liczb. Wypisz kazda rozna wartosc tylko raz,
w kolejnosci jej pierwszego wystapienia.
Nie uzywaj sortowania. Mozesz uzyc petli zagniezdzonych.
Przyklad: 4 2 4 7 2 9 7 1 1 5 -> 4 2 7 9 1 5
*/
void zadanie17(void) {
    int tablica[10] = {};
    printf("Podaj liczby: ");
    for (int i = 0 ; i < 10 ; i++) {
        if (scanf("%d", &tablica[i]) != 1) {
            printf("Incorrect input");
            return;
        }
    }
    int powtarza_sie = 0;
    for (int i = 0 ; i < 10 ; i++) {
        for (int j = 0 ; j < 10 ; j++) {
            if (tablica[i] == tablica[j]) {
                powtarza_sie++;
            }
            if (powtarza_sie == 1) {
                printf("%d ", tablica[i]);
            }
        }
    } //Nie dziala
}

/*
ZADANIE 18 - LICZBY WYSTEPUJACE TYLKO RAZ
Wczytaj 10 liczb. Wypisz tylko te wartosci, ktore wystepuja
w calej tablicy DOKLADNIE raz. Zachowaj kolejnosc wejsciowa.
Jesli takich liczb nie ma, wypisz "Brak".
Przyklad: 4 2 4 7 2 9 7 1 3 5 -> 9 1 3 5
*/
void zadanie18(void) {
    // TODO
}

/*
ZADANIE 19 - DRUGA NAJWIEKSZA ROZNA WARTOSC
Wczytaj 10 liczb. Znajdz druga najwieksza ROZNA wartosc
bez sortowania. Jesli wszystkie wartosci sa rowne,
wypisz "Brak drugiej wartosci".
Przyklad: 4 9 2 9 7 5 7 1 3 8 -> 8
Przyklad: 5 5 5 5 5 5 5 5 5 5 -> Brak drugiej wartosci
*/
void zadanie19(void) {
    // TODO
}

/*
ZADANIE 20 - PARY O ZADANEJ SUMIE
Wczytaj 10 liczb calkowitych oraz liczbe x.
Wypisz wszystkie pary INDEKSOW (i, j), dla ktorych i < j
oraz tab[i] + tab[j] == x. Kazda pare indeksow wypisz tylko raz.
Na koniec wypisz liczbe znalezionych par.
Przyklad: tab = 1 4 2 3 5 0 6 2 4 1; x = 5
Przykladowe pary: (0,1), (0,8), (1,9), (2,3), (3,7), (4,5), (8,9)
*/
void zadanie20(void) {
    // TODO
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
