#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int agno;
	int mes;
	int dia;
	bool bandera;
		
	cout << "ingrese el agno: ";
	cin >> agno;
	
	cout << "ingrese el mes: ";
	cin >> mes;
	
	cout << "ingrese el dia: ";
	cin >> dia;
		
	bandera = true;	
	
	if(mes < 1 || mes > 12){
		bandera = false;
	}else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		if(dia > 31){
			bandera = false;
		}
	}else if(mes == 2){		
		if(agno % 4 == 0 && (agno % 100 != 0 || agno % 400 == 0)){
			if(dia > 29){
				bandera = false;
			}
		}else{
			if(dia > 28){
				bandera = false;
			}
		}
	}else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
		if(dia > 30){
			bandera = false;
		}
	}
	if(bandera){
		cout << agno << "-" << mes << "-" << dia << " es valida" << endl;
	}else{
		cout << agno << "-" << mes << "-" << dia << " no es valida" << endl;
	}
	
	return 0;
}

