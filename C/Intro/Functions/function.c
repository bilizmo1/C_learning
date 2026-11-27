#include <stdio.h>

// napisz funkcje ktora dodaje dwie liczby całkowiote i zwraca sume 
void suma(){
    printf("Podaj a: ");
    int a;
    scanf("%d", &a);
    printf("Podaj b: ");
    int b;
    scanf("%d", &b);
    int suma = a + b;
    printf("Suma liczb %d i %d wynosi %d", a, b, suma);
    
}

// uzytkownik podaje w funkcji main liczbe a i b(boki prostokąta), zwracamy do main pole i obw
int pole_prostokata(int a, int b){
    int pole = a * b;
    return pole;
    
}
int obwod_prostokata(int a, int b){
    int obwod = 2 * a + 2 * b;
    return obwod;
}

// funkcja, ktora oblicza sume cyfr liczby i zwraca wynik 
// 123 -> 6
int suma_cyfr(int liczba){
    int ostatnia_cyfra;
    int suma_cyfr = 0;
    while(liczba > 0){
        ostatnia_cyfra = liczba % 10;
        suma_cyfr = suma_cyfr + ostatnia_cyfra;
        liczba = liczba / 10;
}
return suma_cyfr;
} 
// funkcja zwracajaca wartosc bezwzlgedna 
int wartosc_bezwzgledna(int liczba){
    if (liczba < 0){
        liczba = liczba * -1;
    }
    return liczba;
}

int main()
{   
    //suma();
    /*int a, b;
    printf("Podaj a i b: ");
    scanf("%d %d", &a, &b);
    int pp = pole_prostokata(a,b);
    printf("Pole prostokata wynosi: %d \n", pp);
    int op = obwod_prostokata(a,b);
    printf("Obwod prostokata wynosi: %d\n", op);*/

    /*printf("Podaj liczbe: ");
    int liczba;
    scanf("%d", &liczba);
    int sum_cyfr = suma_cyfr(liczba);
    printf("Suma cyfr liczby %d wynosi: %d\n", liczba, sum_cyfr);*/

    printf("Podaj liczbe: ");
    int liczba;
    scanf("%d", &liczba);
    int wartosc_bezwg = wartosc_bezwzgledna(liczba);
    printf("wartosc bezwgledna liczby %d wynosi: %d", liczba, wartosc_bezwg);
    return 0; // zakończ program z kodem  0 
}

