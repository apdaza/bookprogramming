numero = int(input("ingrese un numero entero: "))

while numero > 0:
	print("%i" %(numero % 10))
	numero = int(numero / 10)
	
