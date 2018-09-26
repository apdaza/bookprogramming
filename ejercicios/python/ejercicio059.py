def validador_iterativo(numero, base):
   while numero > 0:
      digito = numero % 10
      numero = int(numero / 10)
      if digito >= base:
         return False
   return True

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   base = int(input("ingrese la base : "))
   if validador_iterativo(numero, base):
      print (str(numero) + " es valido en base " + str(base))
   else:
      print (str(numero) + " no es valido en base " + str(base))
