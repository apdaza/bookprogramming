#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

bool biciesto(int anio){
	if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
		return true;
	else
		return false;
	
}

int dias_mes(int mes, int anio){
	switch(mes){
		case 1:
			return 31;
		case 2:
			if(biciesto(anio))
				return 29;
			else
				return 28;
		case 3:
			return 31;
		case 4:
			return 30;
		case 5:
			return 31;
		case 6:
			return 30;
		case 7:
			return 31;
		case 8:
			return 31;
		case 9:
			return 30;
		case 10:
			return 31;
		case 11:
			return 30;
		case 12:
			return 31;
	}
}
bool validar_fecha(string fecha){
	int anio = atoi(fecha.substr(0,4).c_str());
	int mes = atoi(fecha.substr(5,2).c_str());
	int dia = atoi(fecha.substr(8,2).c_str());
	
	if(anio < 1582)
		return false;
	if(mes < 1 || mes > 12)
		return false;
	if(dia < 1 || dia > dias_mes(mes, anio))
		return false;
	
	return true;
	
}

string fecha_anterior(string fecha1, string fecha2){
	int anio1 = atoi(fecha1.substr(0,4).c_str());
	int mes1 = atoi(fecha1.substr(5,2).c_str());
	int dia1 = atoi(fecha1.substr(8,2).c_str());
	int anio2 = atoi(fecha2.substr(0,4).c_str());
	int mes2 = atoi(fecha2.substr(5,2).c_str());
	int dia2 = atoi(fecha2.substr(8,2).c_str());
	
	if(anio1 < anio2)
		return fecha1;
	else if(anio1 == anio2){
		if(mes1 < mes2)
			return fecha1;
		else if(mes1 == mes2){
			if(dia1 < dia2)
				return fecha1;
			else if(dia1 == dia2)
				return "iguales";
			else
				return fecha2;
		}else
			return fecha2;
	}else
		return fecha2;
}

int main() {
	string fecha1, fecha2;
	cout << "ingrese la primera fecha : " << endl;
	cin >> fecha1;
	cout << "ingrese la segunda fecha : " << endl;
	cin >> fecha2;
	if(validar_fecha(fecha1) && validar_fecha(fecha2))
		if(fecha_anterior(fecha1,fecha2) == "iguales")
			cout << fecha1 << " es igual a " << fecha2 << endl;
		else if(fecha_anterior(fecha1,fecha2) == fecha1)
			cout << fecha1 << " es previa a " << fecha2 << endl;
		else
			cout << fecha2 << " es previa a " << fecha1 << endl;
	else
		cout << " fechas no validas " << endl;
	
	return 0;
}

