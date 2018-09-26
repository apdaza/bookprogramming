#include<iostream>

using namespace std;

int main() {

	int i=1;
	int sumaimpares = 0;
	int sumapares = 0;

	cout << "Operaciones sobre los nœmeros del 1 al 200." << endl;
	while (i <= 200) {
		if (i % 2 == 0) {
			sumapares=sumapares+i;
		} else {
			sumaimpares=sumaimpares+i;
		}
		i=i+1;
	}
	cout << "Nœmeros Pares: " << endl;
	cout << "La suma es: " << sumapares << endl;
	cout << "La media es: " << sumapares/100 << endl;
	cout << "Nœmeros ImPares:  " << endl;
	cout << "La suma es: " << sumaimpares << endl;
	cout << "La media es: " << sumaimpares/100 << endl;

	return 0;
}

