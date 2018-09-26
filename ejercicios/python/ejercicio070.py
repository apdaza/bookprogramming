def mcd_recursivo(m, n):
   if (n == 0):
      return m
   else:
      return mcd_recursivo(n, m % n)

if __name__ == "__main__":
   numero1 = int(input("ingrese el numero : "))
   numero2 = int(input("ingrese otro numero : "))
   if (numero2 > numero1):
      temp = numero2
      numero2 = numero1
      numero1 = temp
   else:
      print("MCD(" + str(numero1) + ", " + str(numero2) + ") = " + str(mcd_recursivo(numero1, numero2)))