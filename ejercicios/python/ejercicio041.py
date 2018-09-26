import sys

i = 0
continuar = True

while (i <= 1000 and continuar):
   i = i + 1
   sys.stdout.write(str(i) + " ")
   if i % 20 == 0: 
      letra = input("\nDesea continuar? S/s ")
      if not('s' in letra or 'S' in letra):
         continuar = False
