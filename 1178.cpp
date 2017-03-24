#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	long double valor = 0;
	long double N[100];

	cout.precision(4);
	cout << fixed;

	cin >> valor;
	N[0] = valor;

	int contador = 0;
	for (int i = 1; i < 100; i++) {
		N[i] = N[i - 1] / 2;
	}
	for (int i = 0; i < 100; i++) {
		cout << "N[" << i << "] = " << N[i] << endl;
	}
	
	return 0;
}