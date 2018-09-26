from random import randint

__size = 5

def llenado_aleatorio(m):
    for i in range(__size):
        m.append([randint(1, 999) for i in range(__size)])

def mostrar_matriz(m):
    for i in m:
        for j in i:
            if j < 10:
                print("  " + str(j), end='\t')
            elif j < 100:
                print(" " + str(j), end='\t')
            else:
                print(str(j), end='\t')
        print("")

def contador_recursivo(numero):
    if(numero == 0):
        return 0
    else:
        return 1 + contador_recursivo(int(numero/10))

def contar_digitos_matriz(m, a):
    for i in range(__size):
        a.append([0 for i in range(__size)])
    for i in range(__size):
        for j in range(__size):
            a[i][j] = contador_recursivo(m[i][j])

if __name__ == "__main__":
    matriz=[]
    auxiliar=[]
    llenado_aleatorio(matriz)
    print("matriz original")
    mostrar_matriz(matriz)
    
    contar_digitos_matriz(matriz,auxiliar)
    print("matriz generada")
    mostrar_matriz(auxiliar)