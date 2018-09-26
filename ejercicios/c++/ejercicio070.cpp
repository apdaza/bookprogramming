#include <iostream>
using namespace std;

int mcd_recursivo(int m, int n){
	if(n == 0)
		return m;
	else
		return mcd_recursivo(n, m % n);
}


int main() {
	int numero1, numero2;
	cout << "ingrese un numero entero : ";
	cin >> numero1;
	cout << "ingrese otro numero entero : ";
	cin >> numero2;
	
	if (numero2 > numero1){
		int temp = numero2;
		numero2 = numero1;
		numero1 = temp;
	}
	cout << "MCD(" << numero1 << ", " << numero2 << ") = " << mcd_recursivo(numero1, numero2) << endl;
	return 0;
}

