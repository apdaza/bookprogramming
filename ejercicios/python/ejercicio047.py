import random

print("El n�mero a adivinar esta en el rango [0,l�mite).")
bandera = False
while (not bandera):
    limite = int(input("Ingrese el valor del l�mite: (>= 1): "));
    if limite >= 1:
        bandera = True

bandera = False
while (not bandera):
    numintentos = int(input("Ingrese la cantidad de intentos: (>= 1): "));
    if numintentos >= 1:
        bandera = True

numero = random.randint(0, limite)

bandera = False
while not bandera and numintentos > 0:
    print("Tienes " + str(numintentos)+ " intentos.")
    intento = int(input("Ingrese un n�mero: "))
    if numero == intento:
        bandera = True;
    elif intento < numero:
        print(str(intento) + " es menor que el n�mero oculto")
    else:
        print(str(intento) + " es mayor que el n�mero oculto")
    numintentos = numintentos - 1;

if bandera:
    print("Felicidades has ganado.")
    print("A�n ten�as " + str(numintentos) + " intentos")
else:
    print("No lo has logrado!!!!.")
    print("El n�mero oculto es: " + str(numero))
