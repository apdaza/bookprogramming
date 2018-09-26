def inversor_recursivo(numero):
   if(numero == 0):
      return ""
   else:
      return str(numero % 10) + (inversor_recursivo(int(numero/10))) 

if __name__ == "__main__":
   numero = int(input("ingrese un numero : "))
   if (numero >= 0):
      print(inversor_recursivo(numero))
   else:
      print("Error el numero debe ser positivo ");