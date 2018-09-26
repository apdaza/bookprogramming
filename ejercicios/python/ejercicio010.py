from math import *

n = int(input("Variable 1? "))
m = int(input("Variable 2? "))
print("Antes del cambio, n= " + str(n) + " m= " + str(m))
n=n^m
m=n^m
n=n^m
print("Despus del cambio, n= " + str(n) + " m= " + str(m))
