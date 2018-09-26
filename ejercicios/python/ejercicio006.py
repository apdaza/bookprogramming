from math import *

A = int(input("Ingrese el valor de A (A > 1):? "))
B = int(input("Ingrese el valor de B (B > 1):? "))
if A > 1 and B > 1:
   print("Divisi—n entera " + str(A) + "/" + str(B) + " = " + str(A//B))
   print("Residuo Divisi—n " + str(A) + "%" + str(B) + " = " + str(A%B))
else: 
   print("Error en el ingreso de los datos " + str(A) + "," + str(B))

