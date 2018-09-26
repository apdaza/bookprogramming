from math import *

x1 = float(input("ingrese la coordenada x1 del punto 1:? "))
y1 = float(input("ingrese la coordenada y1 del punto 1:? "))
x2 = float(input("ingrese la coordenada x2 del punto 2:? "))
y2 = float(input("ingrese la coordenada y2 del punto 2:? "))
d = sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2 )
print("La distancia entre (" + str(x1) + "," + str(y1) + ") y (" + str(x2) + "," + str(y2) + ") es" + str(d))

