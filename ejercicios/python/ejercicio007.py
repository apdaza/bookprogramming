distancia = float(input("Ingrese la distancia recorrida (Kil—metros): "))
tiempo = float(input("Ingrese el tiempo del recorrido (Minutos): "))

distancia = distancia * 1000
tiempo = tiempo * 60
velocidad = distancia / tiempo
print("La velocidad del proyectil es " + str(velocidad) + " m/s")
