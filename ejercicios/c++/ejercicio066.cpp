#include <iostream>
using namespace std;

int fibo_recursivo(int termino){	if(termino < 2)		return termino;	else		return fibo_recursivo(termino-1) + fibo_recursivo(termino-2);}

int main() {	int numero;	cout << "ingrese un numero entero : ";	cin >> numero;	if (numero >= 0)		cout << "el termino " << numero << " de la serie de fibonacci es " << fibo_recursivo(numero) << endl;	else		cout << "El numero debe ser positivo." << endl;	return 0;}
