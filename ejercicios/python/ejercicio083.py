import random

lista = []
for i in range(10):
    lista.append(random.randint(100, 200))

print("Elementos del arreglo original: ")
print(lista)

for i in range(10):
    for j in range(i,10):
        if lista[i] > lista[j]:
            temp = lista[i]
            lista[i] = lista[j]
            lista[j] = temp
print()

print("Elementos del arreglo ordenado: ")
print(lista)