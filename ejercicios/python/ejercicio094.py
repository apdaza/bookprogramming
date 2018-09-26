def buscar(lista,elemento):
    x = -1
    for i in range(len(lista)):
        if elemento == lista[i][0]:
            x = i
    return x

def main():
    numeros = []

    while True:
        numero = int(input("ingrese un numero entero diferente de cero: "))
        if numero == 0:
            break
        else:
            verificar = buscar(numeros, numero)
            if verificar == -1:
                lista = [numero, 1]
                numeros.append(lista)
            else:
                numeros[verificar][1] = numeros[verificar][1] + 1

    salida = open('ejercicio094.out', 'w')

    for f in range(len(numeros)):
        salida.write(str(numeros[f][0]))
        salida.write(' -> ')
        salida.write(str(numeros[f][1]))
        salida.write('\n')
    salida.close()

if __name__ == '__main__':
    main()
