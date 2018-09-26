#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char **argv)
{
	int numero;
	srand(time(0));
	
	numero = 1 + rand() % 99;	
	cout << numero << " / " << 2 << " sobran " << numero % 2 << endl;
	cout << numero << " / " << 3 << " sobran " << numero % 3 << endl;
	cout << numero << " / " << 5 << " sobran " << numero % 5 << endl;
	cout << numero << " / " << 7 << " sobran " << numero % 7 << endl;
	
	return 0;
}

