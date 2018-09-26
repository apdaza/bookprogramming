#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int volumen;
	int radio;
	cout << "ingrese el valor del radio: " << endl;
	cin >> radio;
	volumen = 4/3 * 3.1416 * pow(radio, 3);
	cout << "el volumen de la esfera de radio: " << radio << " es "<< volumen << endl;
	return 0;
}

