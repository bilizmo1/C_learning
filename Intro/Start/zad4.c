#include <stdio.h>

int main(void){

printf("Podaj dwie liczby calkowite: ");

int pierwsza_liczba, druga_liczba;

if(scanf("%d %d", &pierwsza_liczba, &druga_liczba) != 2){
        printf("Podano niepoprawne dane");
        return 1;
}

int suma_cryfr_1 = 0;

while (pierwsza_liczba > 0){
    suma_cryfr_1 = suma_cryfr_1 + pierwsza_liczba % 10; //3 // 2 +3 // 1 + 2 + 3
    pierwsza_liczba = pierwsza_liczba / 10;
}

int suma_cyfr_2 = 0;

while (druga_liczba > 0){
    suma_cyfr_2 = suma_cyfr_2 + druga_liczba % 10;
    druga_liczba = druga_liczba / 10;
}
int suma_cyfr = suma_cryfr_1 + suma_cyfr_2;
printf("%d", suma_cyfr);
return 0;
}