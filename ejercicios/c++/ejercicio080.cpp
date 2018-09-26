#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int ar[10];
	int cont_positivos = 0, cont_negativos = 0;
	srand(time(0));
	
	for(int i = 0; i < 10; i++){
		ar[i] = (rand() % 100) - 50;
	}
	
	for(int i = 0; i < 10; i++){
		if(ar[i] > 0)
			cont_positivos += ar[i];
		else
			cont_negativos += ar[i];
	}
	
	cout << "Elementos del arreglo: " << endl;
	for(int i=0;i<10;i++)
		cout << ar[i] << "  "; 
	
	cout << endl;
	
	cout << " los positivos suman : " << cont_positivos << endl;
	cout << " los negativos suman : " << cont_negativos << endl;
	
	return 0;
}
