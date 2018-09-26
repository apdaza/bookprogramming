import sys
a = int(input("Ingrese el primer nœmero: "))
b = int(input("Ingrese el segundo nœmero: "))  

if a < b :
    menor = a
    mayor = b
else :
    menor = b
    mayor = a

for i in range(menor + 1, mayor) :
    if i % 2 == 0:
        sys.stdout.write(str(i) + " ")