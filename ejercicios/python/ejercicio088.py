from random import randint

__size = 5

def llenado_aleatorio(m):
    for i in range(__size):
        m.append([randint(1, 100) for i in range(__size)])

def mostrar_matriz(m):
    for i in m:
        for j in i:
            if(j < 10):
                print("  " + str(j), end='\t')
            else:
                print(" " + str(j), end='\t')
        print("")
        
def ordenar_matriz(m):
    for i in range(__size):
        for j in range(__size):
            for ia in range(__size):
                for ja in range(__size):
                    if(m[i][j] < m[ia][ja]):
                        temp = m[i][j]
                        m[i][j] = m[ia][ja]
                        m[ia][ja] = temp
        
if __name__ == "__main__":
    matriz=[]
    llenado_aleatorio(matriz)
    print("matriz original")
    mostrar_matriz(matriz)
    ordenar_matriz(matriz)
    print("matriz ordenada")
    mostrar_matriz(matriz)