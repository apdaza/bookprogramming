__size = 5

def llenado_usuario(m):
    for i in range(__size):
        n=[]
        for j in range(__size):
            num = int(input("ingrese el valor para la posicion (" + str(i) + "," + str(j) + ") : "))
            n.append(num)
        m.append(n)

def mostrar_matriz(m):
    for i in m:
        for j in i:
            print(j, end='\t')
        print("")

if __name__ == "__main__":
    matriz=[]
    positivos = 0
    negativos = 0
    llenado_usuario(matriz)
    mostrar_matriz(matriz)
    for i in matriz:
        for j in i:
            if j > 0:
                positivos += j
            else:
                negativos += j
    
    print("positivos = " + str(positivos))
    print("negativos = " + str(negativos))