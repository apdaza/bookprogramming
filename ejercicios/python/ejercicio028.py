bandera = True

altura = int(input("ingrese su altura: "))
sexo = input("ingrese su sexo(m/f): ")
	
if(sexo == 'f'):
	peso = 45.5 + 0.866 * (altura - 152.4)
else:
	peso = 50 + 1.06 * (altura - 152.4)


print("su peso ideal es %f Kg." %(peso))
