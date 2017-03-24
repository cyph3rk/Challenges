#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{		
	unsigned short int repeticoes = 0;
	queue<int> valores;

	cin >> repeticoes;

	for (int i = 0; i < repeticoes; i++) {
		int A;
		cin >> A;
		valores.push(A);
	}
		
	while (!valores.empty()) {
		int numero = valores.front();
		valores.pop();
						
		bool achou = false;
		int contador = 0;
		int soma = 0;

		for (int i = 1; i < numero; i++) {
			if (numero % i == 0) {
				soma += i;
			}
		}
		if (soma == numero) {
			cout << numero << " eh perfeito" << endl;
		}
		else {
			cout << numero << " nao eh perfeito" << endl;
		}
	}

	return 0;
}