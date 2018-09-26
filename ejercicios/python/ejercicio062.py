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
    
if __name__ == "__main__":
    fecha = input("ingrese la fecha ")
    if validar_fecha(fecha):
        print(fecha + " es valida")
    else:
        print(fecha + " no es valida")