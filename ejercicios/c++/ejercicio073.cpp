#include <iostream>
using namespace std;

int contador_recursivo(int numero){	if(numero == 0)		return 0;	else		return 1 + contador_recursivo(numero/10);}

int main() {	int numero;	cout << "ingrese un numero entero : ";	cin >> numero;	if (numero >= 0)		cout << "el numero " << numero << " tiene " << contador_recursivo(numero) << " digitos " << endl;	else		cout << "El numero debe ser positivo." << endl;	return 0;}
