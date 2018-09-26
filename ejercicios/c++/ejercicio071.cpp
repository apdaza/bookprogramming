#include <iostream>
using namespace std;

int a_binario_recursivo(int numero){
	if(numero == 0)
		return 0;
	else
		return (numero % 2) + (a_binario_recursivo(numero/2) * 10);
}


int main() {
	int numero;
	cout << "ingrese un numero entero : ";
	cin >> numero;
	
	if (numero >= 0)
		cout << a_binario_recursivo(numero);
	else
		cout << "Error el numero debe ser un entero positivo." << endl;
	return 0;
}

