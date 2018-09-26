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

int main() {
	string fecha;
	cout << "ingrese la fecha : " << endl;
	cin >> fecha;
	if(validar_fecha(fecha))
		cout << fecha << " es valida " << endl;
	else
		cout << fecha << " no es valida " << endl;
	
	return 0;
}

