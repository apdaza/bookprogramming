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

string inversor_recursivo(int numero){

int main() {
	