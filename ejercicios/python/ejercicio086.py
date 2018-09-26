from random import randint
__columnas = 10

def llenado_aleatorio(m):
    n=[]
    for i in range(__columnas):
        n.append(randint(1, 20))
    m.append(n)

def llenado_cuadrados(m):
    n=[]
    for i in range(__columnas):
        n.append(m[0][i]**2)
    m.append(n)

def llenado_sumas(m):
    n=[]
    for i in range(__columnas):
        n.append(m[0][i]+m[1][i])
    m.append(n)

def mostrar_matriz(m):
    for i in m:
        for j in i:
            print(j, end='\t')
        print("")
        
if __name__ == "__main__":
    matriz=[]
    llenado_aleatorio(matriz)
    llenado_cuadrados(matriz)
    llenado_sumas(matriz)
    mostrar_matriz(matriz)
    