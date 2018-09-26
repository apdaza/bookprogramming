#include<iostream>

using namespace std;

int main() {
	bool continuar;
	int i;
	char letra;
	
	cout<<"Nœmeros del 1 al 1000"<<endl;
	i = 0;
	continuar = true;
	
	while (i<=1000 && continuar) {
		i = i+1;
		cout << i << " ";
		if (i % 20 == 0) {
			cout<<endl;
			cout<<"Desea continuar? S/s ";
			cin>>letra;
			if (!(letra == 's' || letra == 'S')) {
				continuar=false;
			}
		}
	}
	return 0;
}

