#include <iostream>
using namespace std;

int divisor_recursivo(int numero, int divisor){
	if(divisor > numero)
		return 0;
	else
		return 1 + divisor_recursivo(numero - divisor, divisor);
}


int main() {
	int numero, divisor;
	cout << "ingrese un numero entero : ";
	cin >> numero;
	cout << "ingrese el divisor : ";
	cin >> divisor;
	if (divisor > 0)
		cout << numero << " / " << divisor << " = " << divisor_recursivo(numero, divisor) << endl;
	else
		cout << "El divisor debe ser positivo." << endl;
	return 0;
}

