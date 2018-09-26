import random
import array

ar = []
#ar es una lista
acum = 0

for i in range(0,10):
    ar.append(random.randint(0, 100))
    acum += ar[i]

promedio = acum // 10
maximo = ar[0]
minimo = ar[0]
cerca = ar[0]

for i in range(0,10):
    if ar[i] > maximo:
        maximo = ar[i]
    if ar[i] < minimo:
        minimo = ar[i]
    if abs(promedio - ar[i]) < abs(promedio - cerca):
        cerca = ar[i]

print("Elementos del arreglo:\n" + str(ar))

print( " el menor es : " + str(minimo) )
print( " el mayor es : " + str(maximo) )
print( " el promedio es: " + str(promedio) )
print( " el mas cercano a "+ str(promedio) + " es : " + str(cerca) )
