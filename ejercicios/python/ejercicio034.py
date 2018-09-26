#Python no soporta la estructura switch

opc = input("Ingrese un caracter numerico: ")
if opc == '0':
    num = 0
elif opc == '1':
    num = 1
elif opc == '2':
    num = 2
elif opc == '3':
    num = 3
elif opc == '4':
    num = 4
elif opc == '5':
    num = 5
elif opc == '6':
    num = 6
elif opc == '7':
    num = 7  
elif opc == '8':
    num = 8
elif opc == '9':
    num = 9
else:
	num = -1
	
if num != -1:
	print(num)
else:
	print("caracter no valido")    
