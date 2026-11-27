#include <stdio.h>
#include <stdbool.h>
// Funkcja - wydzielony fragment programu, ktory wykonuje okreslone zadanie 

int licznik = 0;

int suma(int a, int b){
    licznik ++;
    return a + b;
}

//deklaracje - prototyp funkcji 
int roznica(int a, int b);

int wartosc_bezwzgledna(int liczba){
    if(liczba < 0){
        liczba = -liczba;
    }
    return liczba;
}
/*
int swap(int a, int b){
    int pierwsza_liczba = a;
    a = b;
    b = pierwsza_liczba;
    return ;
}

*/

void zamiana(int a){ // nowa zmienna a -> zmzienna lokalna(29-31) -> ax128
    a = 100;
    printf("Jestesmy w funckcji zamiana\n");
    printf("%p\n", &a);
    printf("%d\n", a);
    printf("Wychodzimy z funckcji zamiana\n");
}

// int b = 123;  &b -> x123
// int *a = &b = x123;
// wypisujemy a -> x123
// opertoar wyłuskania *a -> 123
// *a = *a + 1;
// b-> 124


/*void zamiana_na_adresie(int *a) // int a - liczba całkowita// int *a - zmienna ktra przechowuje adres w pamieci innej zmiennej
{  // a -> przechowuje adres w pamieci 
    printf("Jestesmy w funckcji zamiana na adresie\n");
    printf("Adres to %p\n", a);
    *a = *a + 1;
}*/

void swap(int *a, int *b){ // 12 15 
    printf("Adres a to: %p, a adres b to: %p\n", a, b);
    int pierwsza_liczba = *a; //12 
    *a = *b; // 15 
    *b = pierwsza_liczba;// 12
}


// funkcja, true/false - ktra sprawdza czy liczba n jest doskonała 
// l.doskonala - sumie swoich dzielnikow mniejszych od niej 
// 6 = 1 + 2 + 3 
// 28 = 1 + 2 + 4 + 7 + 14 

bool czy_doskonala(int liczba){
    int suma = 0;
    for(int i = 1 ; i <= liczba / 2 ; i++){
        if(liczba % i == 0){
            suma = suma + i;
        }
    }
    return suma == liczba;
    /*if(suma == liczba){   
        printf("Liczba jest dokonala");
        return true;
    }
    else{
        printf("Liczba nie jest doskonala");
        return false;
    }*/
}



int main(){

    //int c = suma(12, 15);
    //int d = roznica(13,14);

    //int liczba = wartosc_bezwzgledna(-5);
    //int a = 10;      // kopia
    //printf("%d\n", a);
    //printf("%p\n", &a);

    // printf("%d\n", a); // wypisz wartość 
    // printf("%p\n", &a); // wypisz adres  -- pointers - wskaźnik -> adres 
    // zamiana(a);

    // zamiana na adresie zmiennej b 

    //int b = 12;
    //printf("%d\n", b);
    //printf("%p\n", &b); 

    // zamiana_na_adresie(&b);
    // printf("%d\n", b);
   
    // funkcja swap - ktora przyjmuje dwie liczby i zamienia je miejscami 
    //swap(&a, &b);
    //printf("%d, %d\n", a, b);

    int liczba = 6;
    bool cdos = czy_doskonala(liczba);
    printf("%d", cdos);
    return 0;
}

// definicja 
int roznica(int a, int b){
    return a - b;
}
