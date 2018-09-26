numero = int(input("Ingrese un numero entero: "))
base = int(input("Ingrese la base del numero: "))

base2 = []
base8 = []
base10 = []

if numero >= 0:
    for i in range(0,2):
        base2.append(i)
    
    for i in range(0,8):
        base8.append(i)
    
    for i in range(0,10):
        base10.append(i)
    
    n = numero
    
    if base == 2:
        while (n > 0):
            digito = n % 10
            estaen = False
            if digito in base2:
                estaen = True
            
            n = n // 10
            
            if  not estaen: 
                n = -1
        
        if n == 0: 
            print(str(numero) + " esta en Base 2")
        else:
            print(str(numero) + " No esta en Base 2")
    elif base == 8:
        while (n > 0):
            digito = n % 10
            estaen = False
            if digito in base8:
                estaen = True
            n = n // 10
            
            if not estaen: 
                n = -1
        
        if n == 0: 
            print(str(numero) + " esta en Base 8")
        else:
            print(str(numero) + " No esta en Base 8")
    elif base == 10:
        while (n > 0):
            digito = n % 10
            estaen = False
            if digito in base10:
                estaen = True
            n = n // 10
            
            if not estaen: 
                n = -1
        
        if n == 0: 
            print(str(numero) + " esta en Base 10")
        else:
            print(str(numero) + " No esta en Base 10")      
    else:
        print("La base " + str(base) + " no esta definida")
else:
    print("Error en el ingreso de datos, " + str(numero) + " debe ser >= 0")
