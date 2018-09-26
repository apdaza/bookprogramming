#include <iostream>
using namespace std;

int sumador_recursivo(int n, int m){	if(m == n)		return n;	else		return n + sumador_recursivo(n + 1, m);}

int main() {	int numero1, numero2;	cout << "ingrese un numero entero : ";	cin >> numero1;
	cout << "ingrese otro numero entero : ";
	cin >> numero2;	if (numero1 <= numero2)		cout << "los numeros entre " << numero1 << " y " << numero2 << " suman " << sumador_recursivo(numero1, numero2) << endl;	else		cout << "Error los numeros deben ser ingresados de menor a mayor." << endl;	return 0;}
