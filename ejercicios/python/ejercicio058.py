def cuenta_digitos_iterativo(numero):
   contador = 0
   if numero < 0:
      numero *= -1
   if numero == 0:
      contador = 1
   while numero > 0:
      contador += 1
      numero = int(numero / 10)
   return contador

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   print (str(numero) + " tiene : " + str(cuenta_digitos_iterativo(numero)) + " digitos " )
