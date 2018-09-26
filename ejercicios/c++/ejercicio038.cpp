#include<iostream>
using namespace std;

int main() {
	int num;
	cout<<"Que tabla de multiplicar desea ver? ";
	cin>>num;
	
	for (int i=1;i<=10;i++) {
		cout<<i<<" * "<<num<<" = "<<i*num<<endl;
	}

	return 0;
}

