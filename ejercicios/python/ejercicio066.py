def fibo_recursivo(termino):
   if (termino < 2):
      return termino
   else:
      return fibo_recursivo(termino - 1) + fibo_recursivo(termino - 2)

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   if (numero >= 0):
      print ("el termino " + str(numero) + " de la serie de fibonacci es " + str(fibo_recursivo(numero)))
   else:
      print("El numero debe ser positivo.")
      
