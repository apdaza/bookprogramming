// Intercambia el contenido de las variables n y m aplicando el operador XOR

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int m;
	int n;
	cout<<"Variable 1? "<<endl;
	cin>>n;
	cout<<"Variable 2?"<<endl;
	cin>>m;
	cout<<"Antes del cambio, n = "<<n<<" m = "<<m<<endl;
	n=n^m;
	m=n^m;
	n=n^m;
	cout<<"DespuŽs del cambio, n = "<<n<<" m = "<<m<<endl;
	return 0;
}

