from math import *

a = int(input("Ingrese el primer nœmero: "))
b = int(input("Ingrese el segundo nœmero: "))
if a > 0 and b > 0:
    print("la suma de " + str(a) + " + " + str(b) + " es " + str(a+b))
    print("la resta de " + str(a) + " - " + str(b) + " es " + str(a-b))
    print("el producto de " + str(a) + " * " + str(b) + " es " + str(a*b))
    print("la divisi—n de " + str(a) + " / " + str(b) + " es " + str(a//b))
else:
    print("Error en el ingreso de los datos " + a + " o " + b)

