#include<iostream>
using namespace std;

int main() {

	int a;
	int b;

	cout<<"Ingrese el valor de A (A > 1):? ";
	cin>>a;
	cout<<"Ingrese el valor de B (B > 1):? ";
	cin>>b;
	if (a>1 && b>1) {
		cout<<"Divisi—n entera "<<a<<"/"<<b<<" = "<<(a/b)<<endl;
		cout<<"Residuo Divisi—n "<<a<<"%"<<b<<" = "<<a%b<<endl;
	} else {
		cout<<"Error en el ingreso de los datos "<<a<<","<<b<<endl;
	}

	return 0;
}

