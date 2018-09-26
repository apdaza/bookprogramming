#include <iostream>
using namespace std;

int main(){
	char r;
	int x=0;
	do{
		x++;
		cout << endl << " desea continuar (S/N) ";
		cin >> r;
	}while(r != 'N');
	cout << "la pregunta se hizo " << x << " veces " << endl;
	return 0;
}
