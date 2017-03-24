#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{		
	int N = 0;
	queue<int> numeros;

	cin >> N;
	for (int i = 1; i <= N; i++) {

		int X, Y;
		cin >> X >> Y;
		numeros.push(X);
		numeros.push(Y);
	}

	while (!numeros.empty()) {
		int X = numeros.front();
		numeros.pop();
		int Y = numeros.front();
		numeros.pop();

		int soma = 0;
		int contador = 0;
		while (contador < Y) {

			if (X % 2 != 0) {
				soma += X;
				contador++;
			}
			X++;
		}
		cout << soma << endl;
	}
	
	return 0;
}