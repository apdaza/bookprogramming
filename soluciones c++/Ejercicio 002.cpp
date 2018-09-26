#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int opuesto, adyacente;
	float hipotenusa;
	cout << "Ingrese el cateto opuesto ";
	cin >> opuesto;
	cout << "Ingrese el cateto adyacente ";
	cin >> adyacente;
	hipotenusa = sqrt(pow(opuesto, 2)+pow(adyacente, 2));
	cout << "el valor de la hipotenusa es " << hipotenusa << endl;
	return 0;
}

