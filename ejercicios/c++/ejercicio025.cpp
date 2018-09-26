#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int numero;
		
	cout << "ingrese el numero a evaluar: ";
	cin >> numero;
		
	if(numero == 1 || numero == 3 || numero == 5 || numero == 7 || numero == 8 || numero == 10 || numero == 12){
		cout << "31 dias" << endl;
	}else if(numero == 2){
		cout << "28 o 29 dias" << endl;
	}else if(numero == 4 || numero == 6 || numero == 9 || numero == 11){
		cout << "30 dias" << endl;
	}else{
		cout << "numero no valido" << endl;
	}
	return 0;
}

