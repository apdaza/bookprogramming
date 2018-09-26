#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Ingrese el valor de n: ";
	cin >> n;
	if(n % 2 == 0){
		cout << "el numero leido es par " << endl;	
	}else{
		cout << "el numero leido es impar " << endl;		
	}
	return 0;
}
