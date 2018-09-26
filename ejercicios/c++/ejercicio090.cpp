#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//procedimiento que llena aleatriamente la matriz
void llenado_aleatorio(int[5][5]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[5][5]);

//procedimiento que cuenta los digitos de un entero
int contador_recursivo(int);

//procedimiento que cuenta los digitos de los elementos de una matriz
void contar_digitos_matriz(int[5][5],int[5][5]);

int main(int argc, char *argv[]) {
	int matriz[5][5];
	int auxiliar[5][5];
	
	srand(time(0));
	llenado_aleatorio(matriz);
	
	contar_digitos_matriz(matriz, auxiliar);
	
	cout << "matriz original" << endl;
	ver_matriz(matriz);
	
	cout << "matriz conteo" << endl;
	ver_matriz(auxiliar);
	
	
	return 0;
}

void llenado_aleatorio(int m[5][5]){
	int aleatorio;
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			aleatorio = 1 + rand() % 998;
			m[f][c] = aleatorio;
		}
		cout << endl;
	}
}
void ver_matriz(int m[5][5]){
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			if(m[f][c] < 10)
				cout << "  " << m[f][c] << "\t";
			else if(m[f][c] >= 10 && m[f][c] < 100)
				cout << " " << m[f][c] << "\t";
			else 
				cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}
int contador_recursivo(int numero){
	if(numero == 0)
		return 0;
	else
		return 1 + contador_recursivo(numero/10);
}
void contar_digitos_matriz(int m[5][5],int a[5][5]){
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			a[f][c] = contador_recursivo(m[f][c]);
		}
	}	
}

