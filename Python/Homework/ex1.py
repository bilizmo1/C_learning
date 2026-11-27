"""
Zastąp pass własnym kodem. Usuń znak # przed przykładowym wywołaniem
pod funkcją i uruchom plik. Porównaj wynik z komentarzem po prawej.
"""

# 1. Dokąd jedzie pociąg?
# W funkcji utwórz lokalną zmienną miasto o wartości "Gdynia" i wypisz ją.
# Przewidź, co pokaże drugi print. Uruchom przykład i sprawdź.
miasto = "Kraków"


def pokaz_cel():
    pass


# pokaz_cel()    # Gdynia
# print(miasto)  # Kraków


# 2. Punkty drużyny
# Użyj global, żeby każde wywołanie dodawało premię do wspólnej puli.
punkty = 10


def dodaj_premie(premia):
    pass


# dodaj_premie(3)
# dodaj_premie(5)
# print(punkty)  # 18


# 3. Ostatnie bilety
# Uzupełnij funkcję wewnętrzną. Użyj nonlocal, aby odjąć jeden bilet
# od puli, jeśli są jeszcze bilety. Zwróć liczbę pozostałych biletów.
def otworz_kase(bilety):
    def sprzedaj():
        pass

    return sprzedaj


# kasa = otworz_kase(2)
# print(kasa(), kasa(), kasa())  # 1 0 0


# 4. Czas na zegarze
# Wypisz godzinę i minuty w jednym wierszu. Użyj parametru sep w print().
# W tym zadaniu oba argumenty są dwucyfrowe.
def pokaz_czas(godzina, minuty):
    pass


# pokaz_czas(14, 35)  # 14:35


# 5. Suma wielokrotności
# Przejdź pętlą for po liczbach od 1 do n włącznie. Zwróć sumę tych,
# które dzielą się przez dzielnik. Przyjmij n >= 1 i dzielnik >= 1.
def suma_wielokrotnosci(n, dzielnik=3):
    pass


# print(suma_wielokrotnosci(10))     # 18, bo 3 + 6 + 9 = 18
# print(suma_wielokrotnosci(10, 5))  # 15


# 6. Ile zer ma liczba?
# Dla dodatniej liczby całkowitej policz cyfry równe zero i zwróć wynik.
# Użyj while. Operacja % 10 odczytuje ostatnią cyfrę, a // 10 ją usuwa.
def policz_zera(n):
    pass


# print(policz_zera(10200))  # 3
# print(policz_zera(47))     # 0


# 7. Tabela cen
# Każdy wiersz ma pokazywać liczbę sztuk i łączną cenę w złotych.
# Użyj for oraz f-stringa. Zacznij od jednej sztuki.
def tabela_cen(cena, liczba_wierszy=3):
    pass


# tabela_cen(4, 2)
# 1 szt. = 4 zł
# 2 szt. = 8 zł


# 8. Najlepszy wynik
# Najpierw zwróć większą z dwóch liczb za pomocą if.
# Następnie wykorzystaj tę funkcję dwukrotnie, aby znaleźć najlepszy
# z trzech wyników. Sprawdź również przypadek remisu.
def lepszy(a, b):
    pass


def najlepszy(a, b, c):
    pass


# print(lepszy(4, 9))         # 9
# print(najlepszy(8, 3, 6))   # 8
# print(najlepszy(5, 7, 7))   # 7


# 9. Lista krotek – plecaki
# Każda krotka zawiera imię i masę plecaka w kilogramach.
# Przejdź pętlą po liście i wypisz imiona osób, których plecak waży
# więcej niż 3 kg. Zachowaj kolejność z listy.
def pokaz_ciezkie_plecaki(plecaki):
    pass


# pokaz_ciezkie_plecaki([("Ola", 4), ("Jan", 3), ("Iga", 5)])
# Ola
# Iga


# 10. Słownik – cena zakupów
# Klucz w cenniku to nazwa produktu, a wartość to cena jednej sztuki.
# Odczytaj cenę wskazanego produktu i zwróć koszt podanej liczby sztuk.
# Przyjmij, że produkt znajduje się w cenniku.
def koszt_zakupu(cennik, produkt, sztuki):
    pass


# ceny = {"sok": 5, "woda": 3, "bułka": 2}
# print(koszt_zakupu(ceny, "woda", 4))  # 12
# print(koszt_zakupu(ceny, "sok", 2))   # 10


# 11. Liczby większe od progu – lista
# Przejdź pętlą for po liście liczb. Zwróć nową listę zawierającą
# tylko liczby większe od progu. Zachowaj kolejność i powtórzenia.
def liczby_powyzej_progu(liczby, prog):
    pass


# print(liczby_powyzej_progu([2, 7, 5, 9, 7], 5))  # [7, 9, 7]
# print(liczby_powyzej_progu([1, 3, 5], 5))        # []


# 12. Obwód i pole – krotka
# Rozpakuj krotkę wymiary do dwóch zmiennych: szerokości i wysokości.
# Oblicz obwód oraz pole prostokąta. Zwróć krotkę (obwod, pole).
def oblicz_wymiary_prostokata(wymiary):
    pass


# print(oblicz_wymiary_prostokata((3, 5)))  # (16, 15)
# print(oblicz_wymiary_prostokata((4, 4)))  # (16, 16)


# 13. Ile razy pojawia się każde słowo? – słownik
# Dla podanej listy słów zwróć słownik, w którym kluczem jest słowo,
# a wartością liczba jego wystąpień. Użyj pętli for.
# Podpowiedź. Użyj instrukcji if, aby sprawdzić, czy słowo jest już
# kluczem w słowniku.
def policz_slowa(slowa):
    pass


# print(policz_slowa(["kot", "pies", "kot", "ryba", "pies"]))
# {'kot': 2, 'pies': 2, 'ryba': 1}
# print(policz_slowa([]))  # {}


# 14. Najtańszy produkt – lista krotek
# Każda krotka zawiera nazwę produktu i jego cenę w złotych.
# Przejdź pętlą po liście i zwróć nazwę najtańszego produktu.
# Przy remisie wybierz produkt, który pojawia się wcześniej na liście.
# Przyjmij, że lista zawiera co najmniej jeden produkt.
def najtanszy_produkt(produkty):
    pass


# print(najtanszy_produkt([("sok", 5), ("woda", 3), ("herbata", 3)]))
# woda
# print(najtanszy_produkt([("mleko", 4)]))  # mleko


# 15. Licznik kroków – funkcja zagnieżdżona
# Uzupełnij funkcję dodaj_kroki. Użyj nonlocal, żeby zwiększyć
# sumę o podaną liczbę kroków i zwrócić aktualną sumę.
# Każde wywołanie utworz_licznik_krokow() tworzy osobny licznik.
def utworz_licznik_krokow():
    suma = 0

    def dodaj_kroki(liczba_krokow):
        pass

    return dodaj_kroki


# licznik_oli = utworz_licznik_krokow()
# licznik_jana = utworz_licznik_krokow()
# print(licznik_oli(100))   # 100
# print(licznik_oli(250))   # 350
# print(licznik_jana(50))   # 50
# print(licznik_oli(10))    # 360