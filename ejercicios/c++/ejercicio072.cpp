#include <iostream>
using namespace std;

int binario_a_decimal_recursivo(int numero){
	if(numero == 0)
		return 0;
	if(numero == 1)
		return 1;
	else
		return (numero % 10) + (binario_a_decimal_recursivo(numero/10) * 2);
}


int main() {
	int numero;
	cout << "ingrese un numero entero : ";
	cin >> numero;
	
	if (numero >= 0)
		cout << binario_a_decimal_recursivo(numero);
	else
		cout << "Error el numero debe ser un entero positivo." << endl;
	return 0;
}

