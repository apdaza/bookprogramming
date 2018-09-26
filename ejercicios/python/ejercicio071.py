def a_binario_recursivo(numero):
   if (numero == 0):
      return 0
   else:
      return (numero % 2) + (a_binario_recursivo(int(numero / 2)) * 10)

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   
   if (numero > 0):
      print(str(numero) + " en binario es : " + str(a_binario_recursivo(numero)))
   else:
      print("Error el numero debe ser un entero positivo.")