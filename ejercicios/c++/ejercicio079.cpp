#include<iostream>
using namespace std;

int main() {

	int base;
	int base10[10];
	int base2[2];
	int base8[8];
	int digito;
	bool estaen;
	int n;
	int numero;

	cout << "Ingrese un numero entero: ";
	cin >> numero;
	cout << "Ingrese la base del numero: ";
	cin >> base;
	
	if (numero >= 0) {
		for (int i = 0; i <= 1; i++) {
			base2[i] = i;
		}
		
		for (int i = 0; i <= 7; i++) {
			base8[i] = i;
		}
		
		for ( int i = 0; i <= 9; i++) {
			base10[i] = i;
		}
		
		n = numero;
		
		switch ( base ) {
		case 2:
			while ( n > 0) {
				digito = n % 10;
				estaen = false;
				for (int i = 0; i <= 1; i++) {
					if (base2[i] == digito) {
						estaen = true;
						i = 2;
					}
				}
				n = n / 10 ;
				if ( !estaen ) {
					n = -1;
				}
			}
			if (n == 0) {
				cout << numero << " esta en Base 2" << endl;
			} else {
				cout << numero << " No esta en Base 2" << endl;
			}
			break;
		case 8:
			while ( n>0 ) {
				digito = n % 10;
				estaen = false;
				for (int i = 0; i <= 7; i++) {
					if (base8[i] == digito) {
						estaen = true;
						i = 8;
					}
				}
				n = n / 10;
				if ( !estaen ) {
					n = -1;
				}
			}
			if (n == 0) {
				cout << numero << " esta en Base 8" << endl;
			} else {
				cout << numero << " No esta en Base 8" << endl;
			}
			break;
		case 10:
			while (n > 0) {
				digito = n % 10;
				estaen = false;
				for (int i = 0; i <= 9; i++) {
					if (base10[i] == digito) {
						estaen = true;
						i = 10;
					}
				}
				n = n/10 ;
				if ( !estaen ) {
					n =- 1;
				}
			}
			if (n == 0) {
				cout << numero << " esta en Base 10" << endl;
			} else {
				cout << numero << " No esta en Base 10" << endl;
			}
			break;
		default:
			cout << "La base " << base << " no esta definida" << endl;
			break;
		}
	} else {
		cout << "Error en el ingreso de datos, " << numero << " debe ser >= 0" << endl;
	}

	return 0;

}

