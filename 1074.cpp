#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
	int valor = 0;
	queue<int> entradas;

	cin >> valor;
	
	for (int i = 0; i < valor; i++) {
		int numero = 0;
		cin >> numero;
		entradas.push(numero);
	}

	while (!entradas.empty()) {
		int numero = entradas.front();

		if (numero == 0) {
			cout << "NULL" << endl;
		}
		else {
			if (numero % 2 == 0) {
				cout << "EVEN ";
			}
			else {
				cout << "ODD ";
			}

			if (numero > 0) {
				cout << "POSITIVE" << endl;
			}
			else {
				cout << "NEGATIVE" << endl;
			}
		}
		entradas.pop();
	}
					
	return 0;
}
