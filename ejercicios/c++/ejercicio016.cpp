#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int numero;
	int veces;
	
	cout << "ingrese el valor del numero: ";
	cin >> numero;
		
	cout << "cuantas veces desea duplicarlo: ";
	cin >> veces;
	
	cout << numero << " duplicado " << veces << " es " << (numero<<veces) << endl;
		
	return 0;
}

