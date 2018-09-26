#include <iostream>
using namespace std;

long cuenta_digitos_iterativo(int numero){	int contador = 0;
	if(numero < 0)
		numero *= -1;
	if(numero == 0)
		contador = 1;
	while(numero > 0){
		contador++;
		numero /= 10;
	}
	return contador;
}

int main() {
	int numero;
	cout << "ingrese el numero : ";
	cin >> numero;
	
	cout << numero << " tiene : " << cuenta_digitos_iterativo(numero) << " digitos " << endl;
	
	return 0;
}



