#include <iostream>#include <stdlib.h>#include <time.h>
using namespace std;

/*
Imprime los elementos del arreglo desde la posici—n i hasta t - 1
precondiciones
0 <= i < t
*/
void imprimir(int a[], int i, int t){
	
	if(i < t ){
		cout << a[i] << " ";
		imprimir (a,i+1,t);
	}
}


/*
Inicializa el arreglo desde la posici—n t hasta la posici—n 0,  con valores enteros aleatorios entre 0 y 300.
precondiciones
0 <= t <  tama–o del arreglo
*/
void inicializar(int a[], int t){
	if (t >= 0 ){
		a[t] = rand() % 300;
		inicializar(a,t-1);
	}
}

/*
Determina el mayor de dos nœmeros enteros
*/
int mayor(int a, int b){
	return a < b ? b : a;
}


/*
Encuentra el elemento mayor almacenado en un arreglo de enteros, desde la posici—n t hasta la posici—n 0
precondiciones
0 <= t <  tama–o del arreglo
*/
int mayor (int a[], int t)
{
	if (t==0)
		return a[0];
	else
		
		return mayor(a[t], mayor(a, t-1));
}
/*
Funci—n principal.
*/
int main(){
	srand(time(0));
	int n;
	cout << "Digite la dimensi—n del arreglo: " ;
	cin >> n;
	int datos[n];
	inicializar(datos,n-1);
	cout << endl;
	imprimir(datos,0,n);
	cout << endl;
	cout << "el mayor elemento del arreglo es: " << mayor(datos,n-1) << endl;
	return 0;
}

