def validador_recursivo(m, n):
   if(m == 0):
      return False
   if(m%10 == n):
      return True
   else:
      return validador_recursivo(int(m/10),n);

if __name__ == "__main__":
   numero = int(input("ingrese un numero : "))
   digito = int(input("ingrese el digito a verificar : "))
   if (validador_recursivo(numero, digito)):
      print("el digito  " + str(digito) + " se encuentra en " + str(numero))
   else:
      print("el digito  " + str(digito) + " no se encuentra en " + str(numero))