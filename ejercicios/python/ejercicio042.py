media = 0
total = 0
num = -1

while num != 0:
    num = float(input("Ingrese un n�mero (0 para finalizar): "))
    media = media + num
    total = total + 1

if total != 1:
    media = media / (total - 1)
    print("El promedio de los " + str(total - 1) + " n�meros ingresados es: " + str(media))
else:
    print("No se ingresaron n�meros. ")
