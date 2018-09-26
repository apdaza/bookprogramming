def main():
    entrada = open('ejercicio097.in', 'r')
    lista = []

    while True:
        linea = entrada.readline()
        if not linea:
            break
        else:
            lista.append(linea[:-1])

    for e in lista:
        for c in e:
            if not(c == ' '):
                print(chr(ord(c)-4),end='')
            else:
                print(c,end='')

    entrada.close()

if __name__ == '__main__':
    main()
