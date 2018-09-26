import sys
import time

a = int(input("Ingrese l’mite inferior del rango: "))
b = int(input("Ingrese l’mite superior del rango: "))

if a >= 1 and b >= 1:
    if a < b:
        menor = a
        mayor = b
    else:
        menor = b
        mayor = a
    
    inicio = time.clock();
    for i in range(menor, mayor+1):
        sumaDivisores = 0
        for j in range(1,i):
            if i % j == 0:
                sumaDivisores = sumaDivisores + j
        
        if sumaDivisores == i:
            sys.stdout.write(str(i) + " ")
    fin = time.clock();
    print("\nTiempo de ejecuci—n: " + str(fin - inicio) + " milisegundos.")
else:
    print("Error en el ingreso del intevalo de bœsqueda [" + str(a) + "," + str(b) + "]")
