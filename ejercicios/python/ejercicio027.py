bandera = True

agno = int(input("ingrese el agno: "))
mes = int(input("ingrese mes: "))
dia = int(input("ingrese el dia: "))
	
if mes < 1 or mes > 12:
	bandera = False
elif mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12:
	if dia > 31:
		bandera = False
elif mes == 2:
	if agno % 4 == 0 and (agno % 100 != 0 or agno % 400 == 0):
		if dia > 29:
			bandera = False
	else:
		if dia > 28:
			bandera = False
elif mes == 4 or mes == 6 or mes == 9 or mes == 11:
	if dia > 30:
		bandera = False
	
if bandera:
	print("%i-%i-%i es valida" %(agno,mes,dia))
else:
	print("%i-%i-%i no es valida" %(agno,mes,dia))
