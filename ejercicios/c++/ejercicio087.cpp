#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//procedimiento que llena aleatriamente la matriz
void llenado_aleatorio(int[3][4]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[3][4]);

int main(int argc, char *argv[]) {
	int matriz[3][4];
	int divisor;
	
	srand(time(0));
	llenado_aleatorio(matriz);
	
	cout << "matriz original" << endl;
	ver_matriz(matriz);
	
	divisor = matriz[2][2];
	for(int f=0; f<3; f++){
		for(int c=0; c<4; c++){
			matriz[f][c]/=divisor;
		}
	}
	
	cout << "matriz dividida" << endl;
	ver_matriz(matriz);
	
	return 0;
}

void llenado_aleatorio(int m[3][4]){
	for(int f=0; f<3; f++){
		for(int c=0; c<4; c++){
			m[f][c] =1 + rand() % 9;
		}
		cout << endl;
	}
}
void ver_matriz(int m[3][4]){
	for(int f=0; f<3; f++){
		for(int c=0; c<4; c++){
			cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}

