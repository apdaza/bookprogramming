a = int(input("Ingrese el primer numero: "))
b = int(input("Ingrese el segundo numero: "))  

if a < b :
    menor = a
    mayor = b
else :
    menor = b
    mayor = a

for i in range(menor + 1, mayor) :
    print(str(i),end=' ')
