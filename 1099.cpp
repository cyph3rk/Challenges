#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
	int interacoes = 0;	
	queue<int> resultados;

	cin >> interacoes;

	for (int i = 0	; i < interacoes; i++) {
		int X, Y;
		cin >> X >> Y;

		if (X > Y) {
			int aux = X;
			X = Y;
			Y = aux;
		}
		int soma = 0;
		for (int i = X+1; i < Y; i++) {
			if (i % 2 != 0) {
				soma += i;
			}
		}
		resultados.push(soma);
	}

	while (!resultados.empty()) {
		cout << resultados.front() << endl;
		resultados.pop();
	}

	return 0;
}
