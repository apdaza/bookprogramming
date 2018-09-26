def contar_letras(cad, let):
    contador = 0
    for c in cad:
        for l in let:
            if c == l:
                contador = contador + 1
    return contador

vocales = list("aeiou")
consonantes = list("bcdfghijklmnpqrstvwxyz")
cadena = list(str(input("ingrese la cadena a evaluar: ")))
contador_vocales = contar_letras(cadena, vocales)
contador_consonantes = contar_letras(cadena, consonantes)
contador_otros = len(cadena) - (contador_vocales + contador_consonantes)
print("la cantidad de vocales es: " + str(contador_vocales))
print("la cantidad de consonantes es: " + str(contador_consonantes))
print("la cantidad de otros caracteres es: " + str(contador_otros))
