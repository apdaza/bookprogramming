def main():
    entrada = open('ejercicio092.in', 'r')
    lista = []
    palabras = []
	
    while True:
        linea = entrada.readline()
        lista = lista + linea.split(" ")
        if not linea:
            break
    #print(lista)
    for i in lista:
		if not i in palabras and i != '' and i != '\n':
			palabras.append(i)
    
    for i in palabras:
		if lista.count(i) > 1:
			terminal = " veces"
		else:
			terminal = " vez"
		print("la palabra '" + i + "' aparece " + str(lista.count(i)) + terminal)
		
    #print(palabras)
    return 0

    entrada.close()

if __name__ == '__main__':
    main()

