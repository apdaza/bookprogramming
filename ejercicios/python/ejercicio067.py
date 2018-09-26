def producto_recursivo(numero, multiplicador):
   if (multiplicador == 0):
      return 0
   if (multiplicador == 1):
      return numero
   else:
      return numero + producto_recursivo(numero, multiplicador - 1)

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   multiplicador = int(input("ingrese otro numero : "))
   if (multiplicador >= 0):
      print (str(numero) + " * " + str(multiplicador) + " = " + str(producto_recursivo(numero, multiplicador)))
   else:
      print("El segundo numero debe ser positivo.")
      
