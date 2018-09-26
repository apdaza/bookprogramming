#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int seg, min, hor;
	cout << "ingrese el valor de los segundos ";
	cin >> seg;
	hor = seg / 3600;
	seg = seg - hor * 3600;
	min = seg / 60;
	seg = seg - min * 60;
	cout << "horas = " << hor << endl;
	cout << "min = " << min << endl;
	cout << "seg = " << seg << endl;
	return 0;
}

