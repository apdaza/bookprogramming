#include<iostream>

using namespace std;

int main() {
	int  numero;

	cout << "ingrese un numero: ";
	cin >> numero;
	
	while(numero > 0){
		cout << numero % 10 << endl;
		numero = int(numero / 10);
	}
	return 0;

}

