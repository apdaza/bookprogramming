#include <iostream>
using namespace std;

int inversor_iterativo(int numero){
	int temp = 0;
	while(numero > 0){
		temp = (temp * 10) + (numero % 10);
		numero /= 10;
	}
	return temp;
}

int main() {
	int numero;
	cout << "ingrese el numero : ";
	cin >> numero;
	
	if(numero == inversor_iterativo(numero))
		cout << "el " << numero << " es un palindromo " << endl;
	else
		cout << "el " << numero << " no es un palindromo " << endl;
	
	return 0;
}



