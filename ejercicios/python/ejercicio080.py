import random

lista = []
for i in range(10):
    lista.append(random.randint(-50, 50))

positivos = 0
negativos = 0

for e in lista:
    if e >= 0:
        positivos = positivos + e
    else:
        negativos = negativos + e
    

print(lista)
print("la suma de los positivos es: " + str(positivos))
print("la suma de los negativos es: " + str(negativos))
