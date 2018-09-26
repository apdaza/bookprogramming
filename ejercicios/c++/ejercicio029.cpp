#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int num_uno; 
	int num_dos;
	int num_tres;
	int medio;
		
	cout << "ingrese primer numero: ";
	cin >> num_uno;
	
	cout << "ingrese segundo numero: ";
	cin >> num_dos;
	
	cout << "ingrese tercer numero: ";
	cin >> num_tres;
		
	if((num_uno >= num_dos && num_uno <= num_tres) || (num_uno >= num_tres && num_uno <= num_dos)){
		medio = num_uno;
	}else if((num_dos >= num_uno && num_dos <= num_tres) || (num_dos >= num_tres && num_dos <= num_uno)){
		medio = num_dos;
	}else{
		medio = num_tres;
	}


	cout << "el numero medio es " << medio << "." << endl;
	return 0;
}

