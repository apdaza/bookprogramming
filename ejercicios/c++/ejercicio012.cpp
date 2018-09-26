#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int numero, mitad, doble;
	cout << "ingrese numero deseado" << endl;
	cin >> numero;
	
	doble = numero << 1;
	mitad = numero >> 1;
	
	cout << " numero = " << numero << " mitad = " << mitad << " doble = " << doble << endl;
	
	return 0;
}

