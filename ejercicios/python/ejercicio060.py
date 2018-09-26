def sumador_iterativo(numero):
   suma = 0
   for i in range(0,numero+1):
      suma += i
   return suma

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   print ("la suma de los primeros " + str(numero) + " numeros enteros es : " + str(sumador_iterativo(numero)))
