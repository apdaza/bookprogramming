#include <iostream>
using namespace std;

long potencia_iterativa(int base, int exponente){
}

int main() {
	int base, exponente;
	cout << "ingrese la base : ";
	cin >> base;
	cout << "ingrese el exponente : ";
	cin >> exponente;
	if (exponente >= 0)
		cout << base << " elevado a " << exponente << " es : " << potencia_iterativa(base, exponente) << endl;
	else
		cout << "Error en exponente " << exponente << " debe ser positivo." << endl;
	return 0;
}


