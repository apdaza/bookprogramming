def biciesto(anio):
    if(anio % 4 == 0 and anio % 100 != 0) or (anio % 400 == 0):
        return True
    else:
        return False

def dias_mes(mes, anio):
    if mes == 1:
        return 31
    if mes == 2:
        if biciesto(anio):
            return 29
        else:
            return 28
    if mes == 3:
        return 31
    if mes == 4:
        return 30
    if mes == 5:
        return 31
    if mes == 6:
        return 30
    if mes == 7:
        return 31
    if mes == 8:
        return 31
    if mes == 9:
        return 30
    if mes == 10:
        return 31
    if mes == 11:
        return 30
    if mes == 12:
        return 31
    
def validar_fecha(fecha):
    anio = int(fecha[0:4])
    mes = int(fecha[5:7])
    dia = int(fecha[8:10])
    
    if(anio < 1582):
        return False
    if(mes < 1 or mes > 12):
        return False
    if(dia < 1 or dia > dias_mes(mes, anio)):
        return False
    return True

def fecha_anterior(fecha1, fecha2):
    anio1 = int(fecha1[0:4])
    mes1 = int(fecha1[5:7])
    dia1 = int(fecha1[8:10])
    anio2 = int(fecha2[0:4])
    mes2 = int(fecha2[5:7])
    dia2 = int(fecha2[8:10])
    
    if(anio1 < anio2):
        return fecha1
    elif(anio1 == anio2):
        if(mes1 < mes2):
            return fecha1
        elif(mes1 == mes2):
            if(dia1 < dia2):
                return fecha1
            elif(dia1 == dia2):
                return "iguales"
            else:
                return fecha2
        else:
            return fecha2
    else:
        return fecha2
    
if __name__ == "__main__":
    fecha1 = input("ingrese la primera fecha ")
    fecha2 = input("ingrese la segunda fecha ")
    if(validar_fecha(fecha1) and validar_fecha(fecha2)):
        if(fecha_anterior(fecha1,fecha2) == "iguales"):
            print(fecha1 + " es igual a " + fecha2)
        elif(fecha_anterior(fecha1,fecha2) == fecha1):
            print(fecha1 + " es previa a " + fecha2)
        else:
            print(fecha2 + " es previa a " + fecha1)
    else:
        print("fechas no es validas")