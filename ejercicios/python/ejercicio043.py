print("Operaciones sobre los nœmeros del 1 al 200.")
i = 1
sumaimpares = 0
sumapares = 0

while i <= 200:
    if i % 2 == 0:
        sumapares = sumapares + i
    else:
        sumaimpares = sumaimpares + i
    i = i + 1

print("Nœmeros Pares: ")
print("La suma es: " + str(sumapares))
print("La media es: " + str(sumapares / 100))
print("Nœmeros ImPares:  ")
print("La suma es: " + str(sumaimpares))
print("La media es: " + str(sumaimpares / 100))

