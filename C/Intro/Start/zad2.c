#include <stdio.h>



int main(){

printf("Podaj liczbe dwucyfrowa: ");

int liczba;

if(scanf("%d", &liczba) !=1 ){
    printf("Podano niepoprawne dane");
return 1;
}

int ostatnia_cyfra = liczba % 10;
int pierwsza_cryfra = liczba / 10;

int suma_cyfr = pierwsza_cryfra + ostatnia_cyfra;

printf("Suma cyfr podanej liczby wynosi: %d", suma_cyfr);
return 0;

}
