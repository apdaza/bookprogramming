#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int horas, dias, semanas;
	cout << "ingrese numero de horas" << endl;
	cin >> horas;
	
	semanas = horas / 168;
	horas = horas % 168;
	dias = horas / 24;
	horas = horas % 24;
	
	cout << semanas << " semanas " << dias << " dias " << horas << " horas " << endl;
	
	return 0;
}

