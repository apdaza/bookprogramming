#include<iostream>
#include<cmath>
using namespace std;

int main() {

	bool bandera;
	int intento;
	int limite;
	int numero;
	int numintentos;

	cout<<"El n�mero a adivinar esta en el rango [0,l�mite)." << endl;
	
	bandera = false;
	while (!bandera) {
		cout<<"Ingrese el valor del l�mite: (>= 1): ";
		cin>>limite;
		if (limite >= 1) {
			bandera=true;
		}
	}
	
	bandera = false;
	while (!bandera) {
		cout<<"Ingrese la cantidad de intentos: (>= 1): ";
		cin>>numintentos;
		if (numintentos >= 1) {
			bandera=true;
		}
	}
	srand(time(0));
	numero = (rand()%limite);
	
	bandera=false;
	while (!bandera && numintentos > 0) {
		cout<<"Tienes "<<numintentos<<" intentos."<<endl;
		cout<<"Ingrese un n�mero: ";
		cin>>intento;
		if (numero == intento) {
			bandera = true;
		} else {
			if (intento < numero) {
				cout<<intento<<" es menor que el n�mero oculto"<<endl;
			} else {
				cout<<intento<<" es mayor que el n�mero oculto"<<endl;
			}
		}
		numintentos = numintentos-1;
	}
	if (bandera) {
		cout<<"Felicidades has ganado."<<endl;
		cout<<"A�n ten�as "<<numintentos<<" intentos"<<endl;
	} else {
		cout<<"No lo has logrado!!!!."<<endl;
		cout<<"El n�mero oculto es: "<<numero<<endl;
	}

	return 0;

}

