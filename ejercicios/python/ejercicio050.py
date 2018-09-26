num_a = int(input("ingrese el primer numero: "))
num_b = int(input("ingrese el segundo numero: "))

copia_a = num_a

cont = 0

while copia_a - num_b > 0:
	cont = cont + 1
	copia_a = copia_a - num_b
	
print("%i / %i = %i" %(num_a, num_b, cont))
	
