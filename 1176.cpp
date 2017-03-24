#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int interacoes = 0;
	queue<string> resposta;

	cin >> interacoes;
	
	for (int i = 0; i < interacoes; i++) {

		int numero = 0;

		cin >> numero;

		long long int anterior = 0;
		long long int corrente = 1;
		for (int i = 0; i < numero; i++) {
			long long int novo = anterior + corrente;
			anterior = corrente;
			corrente = novo;
		}
		string aux = "Fib(";
		aux.append(std::to_string(numero));
		aux.append(") = ");
		aux.append(std::to_string(anterior));
		resposta.push(aux);
	}

	while (!resposta.empty()) {
		cout << resposta.front() << endl;
		resposta.pop();
	}
	
	return 0;
}