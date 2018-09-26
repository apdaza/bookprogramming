#include<iostream>

using namespace std;

int main() {

	int horas;
	int minutos;
	int segundos;

	cout<<"Ingrese la cantidad de horas (Formato 24 horas): ";
	cin>>horas;
	cout<<"Ingrese la cantidad de minutos: ";
	cin>>minutos;
	cout<<"Ingrese la cantidad de segundos: ";
	cin>>segundos;
	if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59) {
		cout<<"Hora actual: "<<horas<<" : "<<minutos<<" : "<<segundos<<endl;
		segundos=segundos+1;
		if (segundos==60) {
			segundos=0;
			minutos=minutos+1;
			if (minutos==60) {
				minutos=0;
				horas=horas+1;
				if (horas==24) {
					horas=0;
				}
			}
		}
		cout<<"Hora despuŽs de un segundo: "<<horas<<" : "<<minutos<<" : "<<segundos<<endl;
	} else {
		cout<<"La Hora: "<<horas<<" : "<<minutos<<" : "<<segundos<<" es incorrecta."<<endl;
	}

	return 0;

}

