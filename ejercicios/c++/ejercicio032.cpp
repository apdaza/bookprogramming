#include <iostream>
using namespace std;

int main(){
	char c;
	cout << "Ingrese un car‡cter: ";
	cin >> c;
	switch(c){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		cout << "el car‡cter es una vocal" << endl;
		break;
	default:
		cout << "el car‡cter no es una vocal" << endl;
		break;
	}
	
	return 0;
}
