#include <iostream>
using namespace std;

long potencia_recursiva(int base, int exponente){	if(exponente == 0)		return 1;	else		return base * potencia_recursiva(base, exponente-1);}

int main() {	int base, exponente;	cout << "ingrese la base : ";	cin >> base;	cout << "ingrese el exponente : ";	cin >> exponente;	if (exponente >= 0)		cout << base << " elevado a " << exponente << " es : " << potencia_recursiva(base, exponente) << endl;	else		cout << "Error en exponente " << exponente << " debe ser positivo." << endl;	return 0;}
