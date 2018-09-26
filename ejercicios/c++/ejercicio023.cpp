#include<iostream>

using namespace std;

int main() {

	int primero;
	int segundo;

	cout<<"Ingrese el primer nœmero ( >= 0): ";
	cin>>primero;
	cout<<"Ingrese el segundo nœmero ( >= 0): ";
	cin>>segundo;
	if (primero>=0 && segundo>=0) {
		if (segundo*segundo==primero)
			cout<<"El segundo es el cuadrado exacto del primero"<<endl;
		else if (segundo<primero*primero) 
				cout<<"El segundo es menor que el cuadrado del primero"<<endl;
			else 
				cout<<"El segundo es mayor que el cuadrado del primero"<<endl;
	} 
	else
		cout<<"Error en el ingreso de los datos: "<<primero<<" , "<<segundo<<endl;


	return 0;

}

