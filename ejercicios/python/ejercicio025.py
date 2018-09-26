numero = int(input("ingrese el numero a evaluar: "))

if numero == 1 or numero == 3 or numero == 5 or numero == 7 or numero == 8 or numero == 10 or numero == 12:
	print("31 dias")
elif numero == 2:
	print("28 o 29 dias")
elif numero == 4 or numero == 6 or numero == 9 or numero == 11:
	print("30 dias")
else:
	print("numero no valido")
