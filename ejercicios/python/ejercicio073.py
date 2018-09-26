def contador_recursivo(numero):
   if (numero == 0):
      return 0
   else:
      return 1 + contador_recursivo(int(numero/10))

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   if (numero >= 0):
      print(str(numero)+" tiene "+str(contador_recursivo(numero))+" digitos")
   else:
      print("Error el numero debe ser positivo")