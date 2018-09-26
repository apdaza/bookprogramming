#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//procedimiento que llena aleatriamente la primera fila de la matriz
void llenado_aleatorio(int[3][10]);

//procedimiento que llena con cuadrados de la primera fila de la matriz
//la segunda fila
void llenado_cuadrado(int[3][10]);

//procedimiento que llena con la suma de la primera y segunda fila de la matriz
//la tercera fila
void llenado_sumas(int[3][10]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[3][10]);

int main(int argc, char *argv[]) {
	int matriz[3][10];
	
	srand(time(0));
	llenado_aleatorio(matriz);
	llenado_cuadrado(matriz);
	llenado_sumas(matriz);
	
	ver_matriz(matriz);
	
	return 0;
}

void llenado_aleatorio(int m[3][10]){
	for(int c=0; c<10; c++){
		m[0][c] =1 + rand() % 19;
	}
}

void llenado_cuadrado(int m[3][10]){
	for(int c=0; c<10; c++){
		m[1][c] =m[0][c] * m[0][c];
	}
}

void llenado_sumas(int m[3][10]){
	for(int c=0; c<10; c++){
		m[2][c] =m[0][c] + m[1][c];
	}
}

void ver_matriz(int m[3][10]){
	for(int f=0; f<3; f++){
		for(int c=0; c<10; c++){
			cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}

