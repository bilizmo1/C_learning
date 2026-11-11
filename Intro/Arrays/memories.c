#include <stdio.h>








int main()
{
        int liczba = 10;
        printf("%d\n", liczba); // wartość liczby 

        // adres w pamięći -> operator bitowy(amersand) 
        printf("%p", &liczba ); // pointers - wskaźnik -- adres w pamieci 

        int a = 10 ;
        int *p = &a;
        printf("%d\n", a);
        printf("%p\n", p); // adres zmiennej a -- to samo printf("%p", &a);
        printf("%p\n", &a);
        printf("%d\n", *p);

        // tablica --- zbir adresw w pamieci 
        // int p[5];
        // wypisuje p[0];
        // wypisuje p -> adres pierwszego elementu 
        // wypisuje p + 1 -> adres drugeigo elemtnu 
        // wypisuje p[1] == *(p+1) -- operator wyłuskania * 

        






}