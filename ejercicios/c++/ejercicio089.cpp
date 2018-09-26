#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//procedimiento que llena aleatriamente la matriz
void llenado_aleatorio(int[4][4]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[4][4]);

//procedimiento que genera la diagonal principal
void generar_diagonal(int[4][4],int[4][4]);

//procedimiento que genera la el triangulo superior
void generar_superior(int[4][4],int[4][4]);

//procedimiento que genera la el triangulo inferior
void generar_inferior(int[4][4],int[4][4]);

//procedimiento que genera la el triangulo inferior
void sumar_matrices(int[4][4],int[4][4]);

int main(int argc, char *argv[]) {
	int matriz[4][4];
	int auxiliar[4][4];
	
	srand(time(0));
	llenado_aleatorio(matriz);
	
	cout << "matriz original" << endl;
	ver_matriz(matriz);
	
	generar_diagonal(matriz,auxiliar);
	generar_superior(matriz,auxiliar);
	generar_inferior(matriz,auxiliar);
	
	sumar_matrices(matriz,auxiliar);
	
	cout << "matriz gererada" << endl;
	ver_matriz(auxiliar);
	
	cout << "matriz resultado" << endl;
	ver_matriz(matriz);
	return 0;
}

void llenado_aleatorio(int m[4][4]){
	int aleatorio;
	for(int f=0; f<4; f++){
		for(int c=0; c<4; c++){
			aleatorio = 10 + rand() % 40;
			m[f][c] = aleatorio;
		}
		cout << endl;
	}
}
void ver_matriz(int m[4][4]){
	for(int f=0; f<4; f++){
		for(int c=0; c<4; c++){
			if(m[f][c] >= 0)
				cout << " " << m[f][c] << "\t";
			else
				cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}

void generar_diagonal(int m[4][4],int a[4][4]){
	for(int f=0; f<4; f++){
		a[f][f] = m[f][f] * -1;
	}
}

void generar_superior(int m[4][4],int a[4][4]){
	for(int f=0; f<4; f++){
		for(int c=0; c<4; c++){
			if(c > f)
				a[f][c] = (m[f][c] * -1) + 1;
		}
	}
}

void generar_inferior(int m[4][4],int a[4][4]){
	for(int f=0; f<4; f++){
		for(int c=0; c<4; c++){
			if(c < f)
				a[f][c] = (m[f][c] * -1) - 1;
		}
	}
}

void sumar_matrices(int m[4][4],int a[4][4]){
	for(int f=0; f<4; f++){
		for(int c=0; c<4; c++){
			m[f][c] = m[f][c] + a[f][c];
		}
	}
}


