def factorial_recursivo(numero):
   if (numero < 1):
      return 1
   else:
      return numero * factorial_recursivo(numero - 1)

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   if (numero > 0):
      print (str(numero) + "!" + " = " + str(factorial_recursivo(numero)))
   else:
      print("El numero debe ser positivo.")
      
