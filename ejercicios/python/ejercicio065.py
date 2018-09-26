def potencia_recursiva(base, exponente):
   if (exponente == 0):
      return 1
   else:
      return (base * potencia_recursiva(base, exponente-1))

if __name__ == "__main__":
   base = int(input("ingrese la base : "))
   exponente = int(input("ingrese el exponente : "))
   if (exponente >= 0):
      print (str(base) + " elevado a " + str(exponente) + " es : " + str(potencia_recursiva(base, exponente)))
   else:
      print("Error en exponente " + str(exponente) + " debe ser positivo.")
      
