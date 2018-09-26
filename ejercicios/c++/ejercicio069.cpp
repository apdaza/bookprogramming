#include <iostream>
using namespace std;

int factorial_recursivo(int numero){
	if(numero < 1)
		return 1;
	else
		return numero * factorial_recursivo(numero - 1);
}


int main() {
	int numero;
	cout << "ingrese un numero entero : ";
	cin >> numero;
	
	if (numero > 0)
		cout << numero << "! " << " = " << factorial_recursivo(numero) << endl;
	else
		cout << "El numero debe ser positivo." << endl;
	return 0;
}

