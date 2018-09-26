from random import randint

def llenado_aleatorio(m):
    for i in range(3):
        m.append([randint(0, 100) for i in range(4)])

def mostrar_matriz(m):
    for i in m:
        for j in i:
            print(j, end='\t')
        print("")
        
if __name__ == "__main__":
    matriz=[]
    llenado_aleatorio(matriz)
    print("matriz original")
    mostrar_matriz(matriz)
    
    divisor = matriz[2][2]
    for i in range(3):
        for j in range(4):
            matriz[i][j] = int(matriz[i][j] / divisor)
    
    print("matriz dividida")
    mostrar_matriz(matriz)
    