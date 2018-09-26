num_uno = int(input("ingrese primer numero: "))
num_dos = int(input("ingrese segundo numero: "))
num_tres = int(input("ingrese tercer numero: "))
	
if (num_uno >= num_dos and num_uno <= num_tres) or (num_uno >= num_tres and num_uno <= num_dos):
	medio = num_uno
elif (num_dos >= num_uno and num_dos <= num_tres) or (num_dos >= num_tres and num_dos <= num_uno):
	medio = num_dos
else:
	medio = num_tres


print("el numero medio es %i." %(medio))
