#include <iostream>
using namespace std;

long sumador_iterativo(int numero){
	long suma = 0;
	for(int i = 0; i <= numero; i++){
		suma += i;
	}
	return suma;
}

int main() {
	int numero;
	cout << "ingrese el numero : ";
	cin >> numero;
	
	cout << "la suma de los " << numero << " primeros numeros naturales es : " << sumador_iterativo(numero) << endl;
	
	return 0;
}



