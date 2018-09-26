#include<iostream>
#include<cmath>
using namespace std;

int main() {

	double d;
	double x1;
	double x2;
	double y1;
	double y2;

	cout<<"Ingrese la coordenada x1 del punto 1:? ";
	cin>>x1;
	cout<<"Ingrese la coordenada y1 del punto 1:? ";
	cin>>y1;
	cout<<"Ingrese la coordenada x2 del punto 2:? ";
	cin>>x2;
	cout<<"Ingrese la coordenada y2 del punto 2:? ";
	cin>>y2;
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout<<"La distancia entre ("<<x1<<","<<y1<<") y ("<<x2<<","<<y2<<") es "<<d<<endl;

	return 0;
}

