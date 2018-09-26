def main():
    entrada = open('ejercicio091.in', 'r')

    while True:
        linea = entrada.readline()
        lista = linea.split(" ")
        if int(lista[0]) == 0 and int(lista[1]) == 0:
            break
        else:
            d, j = (int(lista[0]) * 50, int(lista[1]))
            x = (d ** 2 - j ** 2) / (2 * j)
            c = ('{0:.1f}'.format(x / 100))
            c = c.replace(".", ",")
            print(c)
    return 0

    entrada.close()

if __name__ == '__main__':
    main()

