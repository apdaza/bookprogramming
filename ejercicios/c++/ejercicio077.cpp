#include <iostream>
using namespace std;

bool par(int);
bool impar(int);

int main() {
	

bool par(int n){
	if(n == 0)
		return true;
	else
		return impar(n-1);
}

bool impar(int n){
	if(n == 0)
		return false;
	else
		return par(n-1);
}