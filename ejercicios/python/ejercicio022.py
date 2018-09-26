from math import *

horas = int(input("Ingrese la cantidad de horas (Formato 24 horas): "))
minutos = int(input("Ingrese la cantidad de minutos: "))
segundos = int(input("Ingrese la cantidad de segundos: "))

if horas >= 0 and horas <= 23 and minutos >= 0 and minutos <= 59 and segundos >= 0 and segundos <= 59:
    print("Hora actual: " + str(horas) + " : " + str(minutos) + " : " + str(segundos))
    segundos = segundos + 1
    if segundos == 60:
        segundos = 0;
        minutos = minutos + 1
        if minutos == 60:
            minutos = 0
            horas = horas + 1
            if horas == 24:
                horas = 0
    
    print("Hora despus de un segundo: " + str(horas) + " : " + str(minutos) + " : " + str(segundos))
else:
    print("La Hora: " + str(horas) + " : " + str(minutos) + " : " + str(segundos) + " es incorrecta.")  




