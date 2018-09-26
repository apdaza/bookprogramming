from math import *

primero = int(input("Ingrese el primer nœmero ( >= 0): "))
segundo = int(input("Ingrese el segundo nœmero ( >= 0): "))

if primero >= 0 and segundo >= 0:
    if segundo * segundo == primero:
        print("El segundo es el cuadrado exacto del primero")
    elif segundo < primero * primero:
        print("El segundo es menor que el cuadrado del primero")
    else:
        print("El segundo es mayor que el cuadrado del primero")
else:
    print("Error en el ingreso de los datos: " + str(primero) + " , " + str(segundo))

