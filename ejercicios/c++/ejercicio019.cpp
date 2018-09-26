#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	float radio;
	float area;
	float perimetro;
	
	cout << "ingrese el radio: ";
	cin >> radio;
		
	perimetro = 2 * 3.1416 * radio;
	area = 3.1416 * pow(radio, 2);
	
	cout << " perimetro = " << perimetro << endl;
	cout << " area = " << area << endl;
		
	return 0;
}

