from random import randint
def llenado_aleatorio(m):
    for i in range(3):
        m.append([randint(0, 100) for i in range(3)])

def mostrar_matriz(m):
    for i in m:
        for j in i:
            print(j, end='\t')
        print("")

def main():
    matriz=[]
    fila_mayor = 0
    columna_mayor = 0
    
    llenado_aleatorio(matriz)
    mostrar_matriz(matriz)
    
    mayor=matriz[fila_mayor][columna_mayor]
    
    for f in range(3):
        for c in range(3):
            if mayor < matriz[f][c]:
                fila_mayor = f
                columna_mayor = c
                mayor = matriz[fila_mayor][columna_mayor]
    
    print("mayor = " + str(mayor))
    print("en la posicion = (" + str(fila_mayor) + "," + str(columna_mayor) + ")")

if __name__ == "__main__":
    main()
