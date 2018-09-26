#include<iostream>

using namespace std;

int main() {
	int acumulador = 1;
	int  numero;

	cout << "ingrese un numero: ";
	cin >> numero;
	
	for(int i = 1; i <= numero; i++){
		acumulador *= i;
	}
	cout << "factorial = " << acumulador << endl;
		
	return 0;

}

