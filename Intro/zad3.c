#include <stdio.h>
int main(void){
    printf("Podaj liczbe calkowita: ");

    int liczba;

    if(scanf("%d", &liczba) != 1){
        printf("Podano niepoprawna liczbe");
        return 1;
    }
    int suma_cyfr = 0;
    while (liczba > 0){
        suma_cyfr += liczba % 10; // 3 
        liczba = liczba / 10;

    }
 

    return 0;
}