#include <iostream>
using namespace std;

int main(){
	int acum=0;
	int n;
	for(int x = 0; x < 5; x++){
		cout << "ingrese el n�mero " << x+1 << " de 5 ";
		cin >> n;
		acum += n;
	}
	cout << "La media de los 5 n�meros es " << (acum/5.0) << endl;
	return 0;
}
