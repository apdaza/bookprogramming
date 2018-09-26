#include <iostream>
using namespace std;

long fibonacci_iterativo(int numero){	int fibo1 = 0;
	int fibo2 = 1;
	int temp;
	if(numero == 0)
		return fibo1;
	else if(numero == 1)
		return fibo2;
	else{		for(int i = 1; i < numero; i++){			temp = fibo2;
			fibo2 = fibo1 + fibo2;
			fibo1 = temp;		}
		return fibo2;
	}
}

int main() {
	int numero;
	cout << "ingrese el termino de la serie que desea obtener : ";
	cin >> numero;
	
	if (numero >= 0)
		cout << "el termino " << numero << " de la serie de fibonacci es : " << fibonacci_iterativo(numero) << endl;
	else
		cout << "la serie de fibonacci solo se gerenera a partir del termino cero" << endl;
	
	return 0;
}



