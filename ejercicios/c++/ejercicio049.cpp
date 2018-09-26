#include<iostream>

using namespace std;

int main() {

	int num_a; 
	int num_b;

	int acum = 0;

	cout << "ingrese el primer numero: ";
	cin >> num_a;
	
	cout << "ingrese el segundo numero: ";
	cin >> num_b;
	
	for(int i=0; i < num_b; i++){
		acum = acum + num_a;
	}
		
	cout << num_a << " * " << num_b << " = " << acum << endl;
		
	return 0;

}

