#include <iostream>
using namespace std;

int main(){
	int i;
	cout << "Ingrese un numero ";
	cin >> i;
	switch(i){
	case 1:
		cout << "el dia es lunes" << endl;
		break;
	case 2:
		cout << "el dia es martes" << endl;
		break;
	case 3:
		cout << "el dia es miercoles" << endl;
		break;
	case 4:
		cout << "el dia es jueves" << endl;
		break;
	case 5:
		cout << "el dia es viernes" << endl;
		break;
	case 6:
		cout << "el dia es sabado" << endl;
		break;
	case 7:
		cout << "el dia es domingo" << endl;
		break;
	default:
		cout << "el numero no corresponde a un dia valido" << endl;
		break;
	}
	
	return 0;
}
