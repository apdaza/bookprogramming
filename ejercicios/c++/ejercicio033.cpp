#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char c;
	int base;
	int altura;
	float area;
	int radio;
	
	cout << "Ingrese una opcion: \n 1 - circulo \n 2 - triangulo \n 3 - rectangulo \n";
	cin >> c;
	
	switch(c){
	case '1':
		cout << "ingrese el valor del radio: ";
		cin >> radio;
		area = 3.1416 * pow(radio,2);
		cout << "el area del circulo es " << area << endl;
		break;
	case '2':
		cout << "ingrese el valor de la base: ";
		cin >> base;
		cout << "ingrese el valor de la altura: ";
		cin >> altura;
		area = base * altura / 2;
		cout << "el area del triangulo es " << area << endl;
		break;
	case '3':
		cout << "ingrese el valor de la base: ";
		cin >> base;
		cout << "ingrese el valor de la altura: ";
		cin >> altura;
		area = base * altura;
		cout << "el area del rectangulo es " << area << endl;
		break;
	default:
		cout << "opcion no valida" << endl;
		break;
	}
	
	return 0;
}
