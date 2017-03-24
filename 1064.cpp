#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double numero = 0;
	double soma = 0;
	int total = 0;
			
	for (int i = 0; i < 6; i++) {
		cin >> numero;
		if (numero > 0) {
			soma += numero;
			total++;
		}
	}

	cout.precision(1);
	cout << fixed;

	cout << total << " valores positivos" << endl;
	cout << soma / total << endl;
	
	return 0;
}
