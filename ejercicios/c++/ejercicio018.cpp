#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int numero1;
	int numero2;
	
	cout << "ingrese el dividendo: ";
	cin >> numero1;
		
	cout << "ingrese el divisor: ";
	cin >> numero2;
	
	cout << numero1 << " / " << numero2 << " sobran " << (numero1%numero2) << endl;
		
	return 0;
}

