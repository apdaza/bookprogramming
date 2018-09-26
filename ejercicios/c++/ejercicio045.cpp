#include<iostream>

using namespace std;

int main() {
	int i, n;
	bool tienedivisor=false;
	
	cout<<"Ingrese un nœmero entero: ";
	cin>>n;
	
	if (n>=2) {
		tienedivisor=false;
		i=2;
		while (i<n) {
			if (n%i==0) {
				tienedivisor=true;
				i=n;
			}
			i=i+1;
		}
		if (!tienedivisor) {
			cout<<n<<" es un nœmero primo"<<endl;
		} else {
			cout<<n<<" no es un nœmero primo"<<endl;
		}
	} else {
		cout<<n<<" debe ser un nœmero mayor o igual a 2"<<endl;
	}
return 0;
}

