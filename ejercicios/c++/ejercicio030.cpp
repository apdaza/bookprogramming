#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int numero;
		
	cout << "ingrese el numero a evaluar: ";
	cin >> numero;
		
	switch(numero){
		case 1:
			cout << "Enero tiene 31 dias" << endl;
			break;
		case 2:
			cout << "Febrero tiene 28 o 29 dias" << endl;
			break;
		case 3:
			cout << "Marzo tiene 31 dias" << endl;
			break;
		case 4:
			cout << "Abril tiene 30 dias" << endl;
			break;
		case 5:
			cout << "Mayo tiene 31 dias" << endl;
			break;
		case 6:
			cout << "Junio tiene 300 dias" << endl;
			break;
		case 7:
			cout << "Juio tiene 31 dias" << endl;
			break;
		case 8:
			cout << "Agosto tiene 31 dias" << endl;
			break;
		case 9:
			cout << "Septiembre tiene 30 dias" << endl;
			break;
		case 10:
			cout << "Octubre tiene 31 dias" << endl;
			break;
		case 11:
			cout << "Noviembre tiene 30 dias" << endl;
			break;
		case 12:
			cout << "Diciembre tiene 31 dias" << endl;
			break;	
		default:
			cout << "numero no valido" << endl;
			break;
	}
	return 0;
}

