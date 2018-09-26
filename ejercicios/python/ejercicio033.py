#Python no soporta la estructura switch

opc = input("Ingrese una opcion: \n 1 - circulo \n 2 - triangulo \n 3 - rectangulo \n")
if opc == '1':
    radio = int(input("ingrese el valor del radio: "))
    area = 3.1416 * (radio ** 2)
    print("el area del circulo es %f" %(area))
elif opc == '2':
    base = int(input("ingrese el valor de la base: "))
    altura = int(input("ingrese el valor de la altura: "))
    area = base * altura / 2
    print("el area del triangulo es %f" %(area))
elif opc == '3':
    base = int(input("ingrese el valor de la base: "))
    altura = int(input("ingrese el valor de la altura: "))
    area = base * altura
    print("el area del rectangulo es %f" %(area))
else:
    print("opcion no valida");

   
