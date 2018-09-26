mayor = 0
menor = 0
contador = 0
acumulador = 0

while True:
	numero = int(input("ingrese un numero (cero para terminar): "))
	if numero == 0:
		break
	else:
		if numero > mayor or mayor == 0:
			mayor = numero
		if numero < menor or menor == 0:
			menor = numero
		contador = contador + 1
		acumulador = acumulador + numero
	
print("mayor = %i" %(mayor))
print("menor = %i" %(menor))
print("promedio = %i" %(acumulador/contador))
	
