#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int altura;
	float peso;
	char sexo;
		
	cout << "ingrese alura: ";
	cin >> altura;
	
	cout << "ingrese su sexo(m/f): ";
	cin >> sexo;
	
	if(sexo == 'f'){
		peso = 45.5 + 0.866 * (altura - 152.4);
	}else{
		peso = 50 + 1.06 * (altura - 152.4);
	}
	
	cout << "su peso ideal es " << peso << "Kg." << endl;
	return 0;
}

