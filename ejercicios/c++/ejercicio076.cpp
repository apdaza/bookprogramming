#include <iostream>
#include <cstring>

using namespace std;
string str(int n){
	string rtn="";
	while(n>0){
		rtn.insert(rtn.begin(),n%10+'0');
		n/=10;
	}
	return rtn;
}

string inversor_recursivo(int numero){	if(numero == 0)		return "";	else		return str(numero % 10) + (inversor_recursivo(numero/10)) ;}

int main() {	int numero;	cout << "ingrese un numero entero : ";	cin >> numero;
		if (numero >= 0)		cout << inversor_recursivo(numero) << endl;	else		cout << "Error el numero debe ser positivo " << endl;	return 0;}
