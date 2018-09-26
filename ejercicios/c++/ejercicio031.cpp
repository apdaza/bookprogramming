#include <iostream>
using namespace std;

int main(){
	int i;
	cout << "Ingrese un nœmero ";
	cin >> i;
	switch(i){
	case 1:
		cout << "el d’a es lunes" << endl;
		break;
	case 2:
		cout << "el d’a es martes" << endl;
		break;
	case 3:
		cout << "el d’a es miŽrcoles" << endl;
		break;
	case 4:
		cout << "el d’a es jueves" << endl;
		break;
	case 5:
		cout << "el d’a es viernes" << endl;
		break;
	case 6:
		cout << "el d’a es s‡bado" << endl;
		break;
	case 7:
		cout << "el d’a es domingo" << endl;
		break;
	default:
		cout << "el nœmero no corresponde a un d’a v‡lido" << endl;
		break;
	}
	
	return 0;
}
