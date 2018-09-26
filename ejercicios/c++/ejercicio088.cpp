#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//procedimiento que llena aleatriamente la matriz
void llenado_aleatorio(int[5][5]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[5][5]);

//procedimiento que ordena la matriz
void ordenar_matriz(int[5][5]);

int main(int argc, char *argv[]) {
	int matriz[5][5];
	
	srand(time(0));
	llenado_aleatorio(matriz);
	
	cout << "matriz original" << endl;
	ver_matriz(matriz);
	
	ordenar_matriz(matriz);
	
	cout << "matriz ordenada" << endl;
	ver_matriz(matriz);
	return 0;
}

void llenado_aleatorio(int m[5][5]){
	int aleatorio;
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			do{
				aleatorio = 1 + rand() % 99;
			}while(aleatorio % 5 == 0);
			m[f][c] = aleatorio;
		}
		cout << endl;
	}
}
void ver_matriz(int m[5][5]){
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			if(m[f][c] < 10)
				cout << " " << m[f][c] << "\t";
			else
				cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}
void ordenar_matriz(int m[5][5]){
	int temp;
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			for(int fa=0; fa<5; fa++){
				for(int ca=0; ca<5; ca++){
					if(m[f][c] < m[fa][ca]){
						temp = m[f][c];
						m[f][c] = m[fa][ca];
						m[fa][ca] = temp;
					}
				}
			}
		}
	}
}
