#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int valor = 0;
	int in = 0;
	int out = 0;

	cin >> valor;
	for (int i = 0; i < valor; i++) {
		int numero = 0;
		cin >> numero;
		if (numero >= 10 && numero <= 20) {
			in++;
		}
		else {
			out++;
		}
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;

	return 0;
}
