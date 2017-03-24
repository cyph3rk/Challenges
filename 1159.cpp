#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{		
	int X = 0;
	queue<int> numeros;

	cin >> X;
	if (X == 0) {
		return 0;
	}
	else {
		numeros.push(X);
	}
	while (X != 0) {
		cin >> X;
		if (X != 0) {
			numeros.push(X);
		}
	}

	while (!numeros.empty()) {
		X = numeros.front();
		numeros.pop();
		
		int soma = 0;
		int contador = 0;
		while (contador < 5) {

			if (X % 2 == 0) {
				soma += X;
				contador++;
			}
			X++;
		}
		cout << soma << endl;
	}

	return 0;
}