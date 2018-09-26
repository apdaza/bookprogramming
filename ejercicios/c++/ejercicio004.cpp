#include<iostream>
using namespace std;

int main() {
	double metros;
	double pies;
	double pulgadas;

	cout<<"Ingrese la cantidad de metros: "<<endl;
	cin>>metros;
	pulgadas=metros*39.27;
	cout<<metros<<" metros equivalen a "<<pulgadas<<" pulgadas."<<endl;
	pies=pulgadas/12;
	cout<<metros<<" metros equivalen a "<<pies<<" pies."<<endl;

	return 0;
}

