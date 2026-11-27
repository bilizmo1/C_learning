import queue


#print("--------------")
#for i in range(1, 100, 2):   # range(x,1)
#    print(i)
#print("--------------")
 
#n = int(input("Podaj n: "))

#ef suma_parzystych(n):
#    suma = 0
#    for i in range(1 , n, 1):   #(100)
#        suma += i
#   return suma

#print(suma_parzystych(n))


# 1226 -> 
#cyfra = int(input("Podaj cyfre: "))
#n = int(input("Podaj n: "))

#def policz_cyfre(n, cyfra): # 1225 -> 2 -> 2 12
#    licznik = 0
#    while n > 0:
#        ostatnia_cyfra = n % 10
#        if ostatnia_cyfra == cyfra:
#            licznik += 1
#        n = n // 10
#    print("Cyfra", cyfra, "wystepuje", licznik)        
    
#policz_cyfre(n, cyfra)


"""
wysokoc = 5
znak #
#
##
###
####
#####

"""

#wysokosc = int(input("Podaj wysokosc: "))
#znak = input("Podaj znak: ")

#def schodki(wysokosc, znak):
#    for i in range(1, wysokosc + 1, 1):
#            print(i * znak)

#schodki(wysokosc, znak)            

#print("*")
#print(3 * "*")

a = input("Podaj pierwszy napis: ")
b = input("Podaj drugi napis: ")

#print(len(a))

def krotsze(a, b):
    if len(a) > len(b):
        return b
    elif len(b) > len(a):
        return a
    else:
        return a

wynik = krotsze(a, b)
print("Krotszy napis to: ", wynik)


# Obiekty w Pythonie
# lista - pythonowska tablica []
# krotka (tuple) -> () -- NIEMODYFIKOWALNA
# słownik -> dict {}

A = [1,2,5,12,0,3,12]

print(A)
print(A[0])
#dodac element do listy
A.append(15)
A.remove()


B = (12,56,31)
print(B[0])

C = {
    "pesel" : 1234,
    "imie" : "Kuba",

}

print(C["pesel"])
