#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int base;
	int exponente;
	double potencia;
	
	cout << "ingrese el valor de la base: ";
	cin >> base;
	
	cout << "ingrese el valor del exponente: ";
	cin >> exponente;
	
	potencia = pow(base, exponente);
	
	cout << base << " ^ " << exponente << " = " << potencia << endl;
		
	return 0;
}

