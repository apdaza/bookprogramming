import random

def main():
    lista = []
    
    entrada = open('ejercicio095.in', 'r')
    while True:
        destino = entrada.readline()
        destino = destino[:-1]
        if not destino:
            break
        else:
            lista.append([destino, 0])
    entrada.close()

    for l in range(len(lista)):
        peso = random.choice(range(100))
        peso = peso + 1
        lista[l][1] = peso
        
    salida = open('ejercicio095.out', 'w')
    for f in range(len(lista)):
        salida.write(str(lista[f][0]))
        salida.write(' -> ')
        salida.write(str(lista[f][1]))
        salida.write('\n')
    salida.close()

if __name__ == '__main__':
    main()
