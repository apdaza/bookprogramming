agno = int(input("ingrese el agno a evaluar: "))

if agno % 4 == 0 and (agno % 100 != 0 or agno % 400 == 0):
	print("bisiesto")
else:
	print("no bisiesto")
