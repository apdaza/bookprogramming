#include<iostream>
using namespace std;

int main() {
	double distancia;
	double tiempo;
	double velocidad;

	cout<<"Ingresa la distancia recorrida (Kil—metros): ";
	cin>>distancia;
	cout<<"Ingrese el tiempo del recorrido (Minutos): ";
	cin>>tiempo;
	distancia=distancia*1000;
	tiempo=tiempo*60;
	velocidad=distancia/tiempo;
	cout<<"La velocidad del proyectil es "<<velocidad<<" m/s"<<endl;
	
	return 0;
}

