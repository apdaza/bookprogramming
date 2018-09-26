#include <iostream>
using namespace std;

int producto_recursivo(int numero, int multiplicador){
	if(multiplicador == 0)
		return 0;
	else if(multiplicador == 1)
		return numero;
	else
		return numero + producto_recursivo(numero, multiplicador - 1);
}


int main() {
	int numero, multiplicador;
	cout << "ingrese un numero entero : ";
	cin >> numero;
	cout << "ingrese un numero entero : ";
	cin >> multiplicador;
	if (multiplicador >= 0)
		cout << numero << " * " << multiplicador << " = " << producto_recursivo(numero, multiplicador) << endl;
	else
		cout << "El segundo numero debe ser positivo." << endl;
	return 0;
}

