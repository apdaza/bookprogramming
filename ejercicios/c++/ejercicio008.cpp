#include<iostream>

using namespace std;

int main() {

	int a;
	int b;
	int cociente;
	int residuo;

	cout<<"Dividendo: ";
	cin>>a;
	cout<<"Divisor: ";
	cin>>b;
	cociente = a/b;
	residuo = a - cociente * b;
	cout<<"El cociente de "<<a<<"/"<<b<<" es "<<cociente<<endl;
	cout<<"El residuo de "<<a<<"/"<<b<<" es "<<residuo<<endl;

	return 0;
}

