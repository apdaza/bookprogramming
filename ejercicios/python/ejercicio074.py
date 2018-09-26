def sumador_recursivo(n,m):
   if (n == m):
      return n
   else:
      return n + sumador_recursivo(n+1, m)

if __name__ == "__main__":
   n = int(input("ingrese el primer numero : "))
   m = int(input("ingrese el segundo numero : "))
   if (m >= n):
      print("los numeros entre " + str(n) + " y " + str(m) + " suman " + str(sumador_recursivo(n,m)))
   else:
      print("Error los numeros deben ser ingresados de menor a mayor.")