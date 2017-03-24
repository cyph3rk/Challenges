#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double numero = 0;
	int contador = 0;

	for (int i = 0; i < 6; i++) {
		cin >> numero;
		if (numero > 0) contador++;
	}
	cout << contador << " valores positivos" << endl;

	return 0;
}