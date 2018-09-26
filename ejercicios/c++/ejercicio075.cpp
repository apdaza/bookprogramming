#include <iostream>
using namespace std;

bool validador_recursivo(int m, int n){	if(m == 0)		return false;
	if(m%10 == n)
		return true;	else		return validador_recursivo(m/10,n);}

int main() {	int numero, digito;	cout << "ingrese un numero entero : ";	cin >> numero;
	cout << "ingrese el digito a verificar : ";
	cin >> digito;	if (validador_recursivo(numero, digito))		cout << "el digito " << digito << " se encuentra en " << numero << endl;	else		cout << "el digito " << digito << " no se encuentra en " << numero << endl;	return 0;}
