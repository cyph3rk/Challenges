#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int numero = 0;
	int pares = 0;
	int positivos = 0;
	int negativos = 0;
			
	for (int i = 0; i < 5; i++) {
		cin >> numero;
		if (numero % 2 == 0) {			
			pares++;
		}
		if (numero > 0) {
			positivos++;
		}
		if (numero < 0) {
			negativos++;
		}
	}

	cout.precision(1);
	cout << fixed;

	cout << pares << " valor(es) par(es)" << endl;
	cout << (5-pares) << " valor(es) impar(es)" << endl;

	cout << positivos << " valor(es) positivo(s)" << endl;
	cout << negativos << " valor(es) negativo(s)" << endl;
	
	return 0;
}
