def comparar(secreta, palabra):
    contador = 0
    for c in palabra:
        if c not in secreta:
            contador = contador + 1
    return contador

def main():
    entrada = open('ejercicio096.in', 'r')
    lista = []
    matriz = []

    while True:
        linea = entrada.readline()
        if not linea:
            break
        else:
            lista = linea[:-1].split(" ")
            matriz.append(lista)

    for e in matriz:
        print(e[0],e[1],comparar(e[0],e[1]),sep=' ')

    entrada.close()

if __name__ == '__main__':
    main()
