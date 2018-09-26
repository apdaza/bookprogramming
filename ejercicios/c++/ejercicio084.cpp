#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//procedimiento que llena aleatriamente la matriz
void llenado_aleatorio(int[3][3]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[3][3]);

int main(int argc, char *argv[]) {
	int matriz[3][3];
	int mayor, fila_mayor = 0, columna_mayor = 0;
	
	srand(time(0));
	llenado_aleatorio(matriz);
	
	ver_matriz(matriz);
	
	mayor = matriz[fila_mayor][columna_mayor];
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			if(mayor<matriz[f][c]){
				fila_mayor = f;
				columna_mayor = c;
				mayor=matriz[fila_mayor][columna_mayor];
			}
		}
	}
	
	ver_matriz(matriz);
	
	cout << "mayor = " << mayor << endl;
	cout << "en la posicion = (" << fila_mayor << "," << columna_mayor << ")"<< endl;
	
	return 0;
}

void llenado_aleatorio(int m[3][3]){
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			m[f][c] = rand() % 100;
		}
	}
}
void ver_matriz(int m[3][3]){
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}

