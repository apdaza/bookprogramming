n = int(input("Ingrese un n�mero entero: "))
tienedivisior = False

if (n >= 2):
    tienedivisior = False
    
    if (n >= 2):
        tienedivisor = False
        i = 2;
        while (i < n):
            if (n % i == 0):
                tienedivisor = True
                i = n
            i = i + 1
        
        if (not tienedivisor):
            print(str(n) + " es un n�mero primo")
        else:
            print(str(n) + " no es un n�mero primo")
    else:
        print(str(n) + " debe ser un n�mero mayor o igual a 2")