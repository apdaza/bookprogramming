#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int ar[10];
	int temp;
	srand(time(0));
	
	for(int i = 0; i < 10; i++){
		ar[i] = (rand() % 100) + 100;
	}
	
	cout << "Elementos del arreglo original: " << endl;
	for(int i=0;i<10;i++)
		cout << ar[i] << "  "; 
	
	cout << endl;
	
	for(int i = 0; i < 10; i++){
		for(int j = i; j < 10; j++){
			if(ar[i] > ar[j]){
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	
	cout << "Elementos del arreglo ordenado: " << endl;
	for(int i=0;i<10;i++)
		cout << ar[i] << "  "; 
	
	cout << endl;
	
	return 0;
}
