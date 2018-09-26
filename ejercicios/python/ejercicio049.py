num_a = int(input("ingrese el primer numero: "))
num_b = int(input("ingrese el segundo numero: "))

acum = 0

for i in range(0, num_b):
	acum = acum + num_a
	
print("%i * %i = %i" %(num_a, num_b, acum))
	
