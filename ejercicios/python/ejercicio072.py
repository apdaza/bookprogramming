def binario_a_decimal_recursivo(numero):
   if (numero == 0):
      return 0
   if (numero == 1):
      return 1
   else:
      return (numero % 10) + (binario_a_decimal_recursivo(int(numero / 10)) * 2)

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   
   if (numero > 0):
      print(str(numero) + " en decimal es : " + str(binario_a_decimal_recursivo(numero)))
   else:
      print("Error el numero debe ser un entero positivo.")