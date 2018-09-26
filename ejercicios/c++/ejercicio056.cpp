#include <iostream>
using namespace std;

long factorial_iterativo(int numero){	long factorial = 1;	for(int i = 1; i <= numero; i++){		factorial *= i;	}	return factorial;
}

int main() {
	int numero;
	cout << "ingrese el numero : ";
	cin >> numero;
	
	if (numero >= 0)
		cout << "el factorial de " << numero << " es : " << factorial_iterativo(numero) << endl;
	else
		cout << "el factorial solo se puede calcular a numeros enteros positivos " << endl;
	
	return 0;
}



