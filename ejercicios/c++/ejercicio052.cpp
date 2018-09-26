#include<iostream>

using namespace std;

int main() {

	int mayor = 0;
	int menor = 0;
	int contador = 0;
	int acumulador = 0;
	int  numero;

	while(true){
		cout << "ingrese un numero (cero para terminar): ";
		cin >> numero;
		if(numero == 0){
			break;
		}else{
			if(numero > mayor || mayor == 0)
				mayor = numero;
			if(numero < menor or menor == 0)
				menor = numero;
			contador++;
			acumulador += numero;
		}
	}
	cout << "mayor = " << mayor << endl;
	cout << "menor = " << menor << endl;
	cout << "promedio = " << (acumulador/contador) << endl;
		
	return 0;

}

