#include<iostream>

using namespace std;

int main() {

	int suma = 0;
	
	for (int i=1; i <= 100; i++) {
		suma += i * i;
	}
	
	cout << "La suma del cuadrado de los nœmeros de 1 a 100 es: " << suma << endl;
	return 0;
}

