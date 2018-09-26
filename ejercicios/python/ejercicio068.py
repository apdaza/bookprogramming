def divisor_recursivo(numero, divisor):
   if (numero < divisor):
      return 0
   else:
      return 1 + divisor_recursivo(numero - divisor, divisor)

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   divisor = int(input("ingrese el divisor : "))
   if (divisor > 0):
      print (str(numero) + " / " + str(divisor) + " = " + str(divisor_recursivo(numero, divisor)))
   else:
      print("El divisor debe ser positivo.")
      
