#include<iostream>

using namespace std;

int main() {

	int a;
	int b;
	int mayor;
	int menor;

	cout << "Ingrese el primer nœmero: ";
	cin >> a;
	cout << "Ingrese el segundo nœmero: ";
	cin >> b;
	if (a < b) {
		menor = a;
		mayor = b;
	} else {
		menor = b;
		mayor = a;
	}
	for (int i = menor+1; i< mayor; i++) {
		cout << i << " ";
	}

	return 0;
}

