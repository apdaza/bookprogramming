#include<iostream>

using namespace std;

int main() {

	int a;
	int b;

	cout<<"Ingrese el primer n�mero: ";
	cin>>a;
	cout<<"Ingrese el segundo n�mero: ";
	cin>>b;
	if (a>0 && b>0) {
		cout<<"la suma de "<<a<<" + "<<b<<" es "<<a+b<<endl;
		cout<<"la resta de "<<a<<" - "<<b<<" es "<<a-b<<endl;
		cout<<"el producto de "<<a<<" * "<<b<<" es "<<a*b<<endl;
		cout<<"la division de "<<a<<" / "<<b<<" es "<<a/b<<endl;
	} else {
		cout<<"Error en el ingreso de los datos "<<a<<" o "<<b<<endl;
	}

	return 0;
}

