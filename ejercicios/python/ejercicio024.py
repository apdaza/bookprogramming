entrada = input("Ingrese la temperatura que desea convertir. \nEjemplo: (35 c - 74 f): ")

if 'c' in entrada:
   entrada = entrada.replace('c', ' ')
   t1 = float(entrada)
   t2 = t1 * 9 / 5 + 32
   print(str(t1) + " C " + " equivale a " + str(t2) + " F")
elif 'f' in entrada:
   entrada = entrada.replace('f', ' ')
   t1 = float(entrada)
   t2 = (t1 - 32) * 5 / 9
   print(str(t1) + " F " + " equivale a " + str(t2) + " C")
else:
   print("Error en el ingreso de la temperatura: " + str(entrada))
