horas = int(input("ingrese el numero de horas"))
semanas = horas / 168
horas = horas % 168

dias = horas / 24
horas = horas % 24

print "%i semanas  %i dias  %i horas" % (semanas, dias, horas)