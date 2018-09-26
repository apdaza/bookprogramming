def factorial_iterativo(numero):
   factorial = 1
   for i in range(1,numero):
      factorial *= i
   return factorial

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   if (numero >= 0):
      print ("el factorial de " + str(numero) + " es : " + str(factorial_iterativo(numero)))
   else:
      print("el factorial solo se puede calcular a numeros enteros positivos ")
      
