#include <iostream>
using namespace std;

long suma_digitos_recursivo(int numero){	if(numero == 0)		return 0;	else		return numero % 10 + suma_digitos_recursivo(numero/10);}

int main() {	int numero;	cout << "ingrese un numero entero : ";	cin >> numero;	if (numero >= 0)		cout << "los digitos de " << numero << " suman " << suma_digitos_recursivo(numero) << endl;	else		cout << "El numero debe ser positivo." << endl;	return 0;}
