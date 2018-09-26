#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char c;
	int numero;
	
	cout << "Ingrese un caracter numerico: ";
	cin >> c;
	
	switch(c){
		case '0':
			numero = 0;
			break;
		case '1':
			numero = 1;
			break;
		case '2':
			numero = 2;
			break;
		case '3':
			numero = 3;
			break;
		case '4':
			numero = 4;
			break;
		case '5':
			numero = 5;
			break;
		case '6':
			numero = 6;
			break;
		case '7':
			numero = 7;
			break;
		case '8':
			numero = 8;
			break;
		case '9':
			numero = 9;
			break;
		default:
			numero = -1;
			break;
	}
	
	if(numero != -1){
		cout << numero << endl;
	}else{
		cout << "caracter no valido" << endl;
	}
	
	return 0;
}
