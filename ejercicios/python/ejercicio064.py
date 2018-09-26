def suma_digitos_recursivo(numero):
   if (numero == 0):
      return 0
   else:
      return (numero % 10 + suma_digitos_recursivo(int(numero/10)))

if __name__ == "__main__":
   numero = int(input("ingrese el numero : "))
   if (numero >= 0):
      print ("la suma de los digitos de " + str(numero) + " suman " + str(suma_digitos_recursivo(numero)))
   else:
      print("El numero debe ser positivo.")
      
