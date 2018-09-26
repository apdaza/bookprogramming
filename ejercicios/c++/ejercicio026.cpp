#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int agno;
		
	cout << "ingrese el agno a evaluar: ";
	cin >> agno;
		
	if(agno % 4 == 0 && (agno % 100 != 0 || agno % 400 == 0)){
		cout << "bisiesto" << endl;
	}else{
		cout << "no bisiesto" << endl;
	}
	
	return 0;
}

