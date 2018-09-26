#include<iostream>

using namespace std;

int main() {

	int num_a = 0;
	int num_b = 1;
	int temp;
	int indice = 0;
	
	while(indice <= 2){
		cout << "hasta que indice desea generar la serie, debe ser mayor a 2: " << endl;
		cin >> indice;
	}
	
	for(int i=0; i<indice; i++){
		cout << num_b << " ";
		temp = num_a;
		num_a = num_b;
		num_b = temp + num_a;
	}
	
	return 0;

}

