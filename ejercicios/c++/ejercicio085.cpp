#include <iostream>
using namespace std;
//procedimiento que llena la matriz
void llenado(int[5][5]);

//procedimiento que muestra en pantalla la matriz
void ver_matriz(int[5][5]);

int main(int argc, char *argv[]) {
	int matriz[5][5];
	int positivos=0;
	int negativos=0;
	
	llenado(matriz);
	
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			if(matriz[f][c]>0){
				positivos+=matriz[f][c];
			}else{
				negativos+=matriz[f][c];
			}
		}
	}
	
	ver_matriz(matriz);
	
	cout << "positivos = " << positivos << endl;
	cout << "negativos = " << negativos << endl;
	
	return 0;
}

void llenado(int m[5][5]){
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			cout<<"ingrese el valor para la fila "<<f<<" y la columna "<<c<<" : ";
			cin>>m[f][c];
		}
	}
}

void ver_matriz(int m[5][5]){
	for(int f=0; f<5; f++){
		for(int c=0; c<5; c++){
			cout << m[f][c] << "\t";
		}
		cout << endl;
	}
}

