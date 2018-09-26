#include<iostream>

using namespace std;

int main() {

	double media = 0;
	double num;
	int total=0;

	do {
		cout << "Ingrese un nœmero (0 para finalizar): ";
		cin >> num;
		media = media + num;
		total = total + 1;
	} while (num != 0);
	
	if( total != 1){	
		media = media/(total-1);
		cout << "El promedio de los " << (total - 1) << " nœmeros ingresados es: " << media << endl;
	}
	else{	
	cout << "No se ingresaron nœmeros." << endl;
	}
	return 0;
}

