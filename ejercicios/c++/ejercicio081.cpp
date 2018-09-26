#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int ar[10];
	int max, min, cerca, promedio, acum = 0;
	srand(time(0));
	for(int i = 0; i < 10; i++){
		ar[i] = (rand() % 100);
		acum = acum + ar[i];
	}
	promedio = acum / 10;
	max = ar[0];
	min = ar[0];
	cerca = ar[0];
	for(int i = 0; i < 10; i++){
		if(ar[i] > max){
			max = ar[i];
		}
		if(ar[i] < min){
			min = ar[i];
		}
		if(abs(promedio - ar[i]) < abs(promedio - cerca)){
			cerca = ar[i];
		}
	}
	
	cout << "Elementos del arreglo: " << endl;
	for(int i=0;i<10;i++)
		cout << ar[i] << "  "; 
	
	cout << endl << " el menor es : " << min << endl;
	cout << " el mayor es : " << max << endl;
	cout << " el promedio es: " << promedio << endl;
	cout << " el mas cercano a "<< promedio << " es : " << cerca << endl;
	return 0;
}
