acumulador = 1
numero = int(input("ingrese un numero: "))

for i in range(1,numero+1):
	acumulador = acumulador * i
	
print("factorial = %i" %(acumulador))
	
