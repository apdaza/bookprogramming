def main():
    entrada = open('ejercicio093.in', 'r')
    salida = open('ejercicio093.out', 'w')
    lista = []
    matriz = []
    traspuesta = []
    
    while True:
        linea = entrada.readline()
        if not linea:
            break
        else:
            lista = linea[:-1].split(" ")
            matriz.append(lista)
        
    for f in range(len(matriz)):
        for c in range(len(matriz[f])):
            salida.write(matriz[c][f])
            salida.write(' ')
        salida.write('\n')
            

    entrada.close()
    salida.close()

if __name__ == '__main__':
    main()

