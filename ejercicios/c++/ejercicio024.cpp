#include <iostream>
#include <string.h>
#include <stdlib.h>

	
using namespace std;

int main(){
	double t1, t2;
	string entrada;
	cout << "Ingrese la temperatura que desea convertir. \nEjemplo: (35 c - 74 f): ";
	getline(cin, entrada);

		
	if(entrada.find('c') != string::npos){
		entrada.replace(entrada.find('c'), 1, " ");
		t1 = atof(entrada.data());
		t2 = t1 * 9 / 5 + 32;
		cout << t1 << " C " << " equivale a " << t2 << " F" << endl;
	}
	else if(entrada.find('f') != string::npos) {
		entrada.replace(entrada.find('f'), 1, " ");
		t1 = atof(entrada.data());
		t2 = (t1 - 32) * 5 / 9;
		cout << t1 << " F " << " equivale a " << t2 << " C" << endl;
	}
	else cout << "Error en el ingreso de la temperatura: " <<  entrada << endl;
	

	return 0;
}
