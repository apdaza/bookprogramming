def potencia_iterativa(base, exponente):
   potencia = 1
   for i in range(0,exponente):
      potencia = potencia * base
   return potencia

if __name__ == "__main__":
   base = int(input("ingrese la base : "))
   exponente = int(input("ingrese el exponente : "))
   if (exponente >= 0):
      print (str(base) + " elevado a " + str(exponente) + " es : " + str(potencia_iterativa(base, exponente)))
   else:
      print("Error en exponente " + str(exponente) + " debe ser positivo.")
      
