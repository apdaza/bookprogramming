#include <iostream>
#include <cstring>
using namespace std;

int contar_letras(string cad, string letras){
	int cont = 0;
	for(int c = 0; c < cad.size(); c++){
		for(int l = 0; l < letras.size(); l++){
			if(cad.substr(c, 1) == letras.substr(l,1))
				cont++;
		}
	}
	return cont;
}

int main(int argc, char *argv[]) {
	string vocales = "aeiou";
	string consonantes = "bcdfghijklmnpqrstvwxyz";
	string cadena;
	int cont_vocales, cont_consonantes, cont_otros;
	
	cout << "ingrese una cadena : " << endl;
	getline(cin, cadena);
	
	cont_vocales = contar_letras(cadena, vocales);
	cont_consonantes = contar_letras(cadena, consonantes);
	cont_otros = cadena.size() - (cont_vocales + cont_consonantes);
	
	cout << "la cantidad de vocales es: " << cont_vocales << endl;
	cout << "la cantidad de consonantes es: " << cont_consonantes << endl;
	cout << "la cantidad de otros caracteres es: " << cont_otros << endl;
	
	return 0;
}

