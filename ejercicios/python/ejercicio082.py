import random
import array

def inicializar(datos, n):
    if n >= 0:
        datos.append(random.randint(0, 100))
        inicializar(datos, n-1)

def mayor(a, b):
    if a < b:
        return b
    else:
        return a

def mayorE(datos,n):
    if n == 0:
        return datos[0]
    else:
        return mayor(datos[n],mayorE(datos,n-1))

if __name__ == "__main__":
    n = int(input("Digite la dimension del arreglo: "))
    datos = []
    inicializar(datos,n-1)
    print(datos)
    print("el mayor elemento del arreglo es: " + str(mayorE(datos,n-1)))

