num_a = 0
num_b = 1

indice = 0

while indice <= 2:
	indice = int(input("hasta que indice desea generar la serie, debe ser mayor a 2: "))

print(num_a, end=" ")
for i in range(0, indice):
	print(num_b, end=" ")
	temp = num_a
	num_a = num_b
	num_b = temp + num_a
	
