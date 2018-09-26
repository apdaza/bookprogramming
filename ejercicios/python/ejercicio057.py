def fibonacci_iterativo(numero):
   fibo1 = 0
   fibo2 = 1
   temp = 0
   if numero == 0:
      return fibo1
   elif numero == 1:
      return fibo2
   else:
      for i in range(1,numero):
         temp = fibo2
         fibo2 = fibo1 + fibo2
         fibo1 = temp
      return fibo2

if __name__ == "__main__":
   numero = int(input("ingrese el termino de la serie que desea obtener : "))
   if (numero >= 0):
      print ("el termino " + str(numero) + " de la serie de fibonacci es : " + str(fibonacci_iterativo(numero)))
   else:
      print("la serie de fibonacci solo se gerenera a partir del termino cero ")
      
