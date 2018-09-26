#include <iostream>
using namespace std;

bool validador_iterativo(int numero, int base){
	int digito;
	while(numero > 0){
		digito = numero % 10;
		if(digito >= base)
			return false;
		numero /= 10;
	}
	return true;
}

int main() {
	int numero, base;
	cout << "ingrese el numero : ";
	cin >> numero;
	cout << "ingrese la base : ";
	cin >> base;
	
	if(validador_iterativo(numero, base))
		cout << "el " << numero << " es valido en base : " << base << endl;
	else
		cout << "el " << numero << " no es valido en base : " << base << endl;
	
	return 0;
}



