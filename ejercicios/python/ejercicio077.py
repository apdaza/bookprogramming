def par(n):
   if(n == 0):
      return True
   else:
      return impar(n-1)

def impar(n):
   if(n == 0):
      return False
   else:
      return par(n-1)

if __name__ == "__main__":
   numero = int(input("ingrese un numero : "))
   if (impar(numero)):
      print(str(numero) + " es impar")
   else:
      print(str(numero) + " es par")