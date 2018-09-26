#include<iostream>
#include <time.h>

using namespace std;

int main() {

	int a;
	int b;
	int mayor;
	int menor;
	int sumadivisores;
	clock_t inicio, fin;

	cout << "Ingrese l’mite inferior del rango: ";
	cin >> a;
	cout << "Ingrese l’mite superior del rango: ";
	cin >> b;
	
	if (a>=1 && b>=1) {
		if (a<b) {
			menor = a;
			mayor = b;
		} else {
			menor = b;
			mayor = a;
		}
		
		inicio = clock();
		for (int i = menor; i <= mayor; i++) {
			sumadivisores=0;
			for (int j = 1; j <= i-1; j++) {
				if (i % j == 0) {
					sumadivisores = sumadivisores + j;
				}
			}
			if (sumadivisores == i) {
				cout << i << " ";
			}
		}
		fin = clock();
		cout << "\nTiempo de ejecuci—n: " << (fin - inicio) << " milisegundos.";
	} else {
		cout << "Error en el ingreso del intevalo de bœsqueda ["<<a<<","<<b<<"]" << endl;
	}

	return 0;
}

