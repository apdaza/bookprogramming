#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int numero1;
	int numero2;
	
	cout << "ingrese el primer numero: ";
	cin >> numero1;
		
	cout << "ingrese el segundo numero: ";
	cin >> numero2;
	
	cout << numero1 << " + " << numero2 << " sin arrastre binario es " << (numero1^numero2) << endl;
		
	return 0;
}

