def inversor_iterativo(numero):
   temp = 0
   while numero > 0:
      temp = (temp * 10) + (numero % 10)
      numero = int(numero/10)
   return temp

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   if(numero == inversor_iterativo(numero)):
      print ("el " + str(numero) + " es un numero palindromo")
   else:
      print ("el " + str(numero) + " no es un numero palindromo")
