#include<iostream>

using namespace std;

int main() {

	int num_a; 
	int num_b;
	int copia_a;

	int cont = 0;

	cout << "ingrese el primer numero: ";
	cin >> num_a;
	
	cout << "ingrese el segundo numero: ";
	cin >> num_b;
	
	copia_a = num_a;
	
	while(copia_a - num_b > 0){
		cont++;
		copia_a-=num_b;
	}
		
	cout << num_a << " / " << num_b << " = " << cont << endl;
		
	return 0;

}

