from random import randint

__size = 4

def llenado_aleatorio(m):
    for i in range(__size):
        m.append([randint(10, 50) for i in range(__size)])

def mostrar_matriz(m):
    for i in m:
        for j in i:
            if j < 0:
                print(str(j), end='\t')
            else:
                print(" " + str(j), end='\t')
        print("")

def generar_auxiliar(m, a):
    for i in range(__size):
        a.append([0 for i in range(__size)])
    for i in range(__size):
        for j in range(__size):
            if(i == j):
                a[i][j] = m[i][j] * -1
            if (i > j):
                a[i][j] = (m[i][j] * -1) - 1
            if (i < j):
                a[i][j] = (m[i][j] * -1) + 1

def sumar_matriz(m, a):
    for i in range(__size):
        for j in range(__size):
            m[i][j] += a[i][j]

if __name__ == "__main__":
    matriz=[]
    auxiliar=[]
    llenado_aleatorio(matriz)
    print("matriz original")
    mostrar_matriz(matriz)
    
    generar_auxiliar(matriz, auxiliar)
    print("matriz generada")
    mostrar_matriz(auxiliar)
    
    sumar_matriz(matriz, auxiliar)
    print("matriz resultante")
    mostrar_matriz(matriz)