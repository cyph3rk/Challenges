#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int tamanho = 0;

	int menor = 0;
	int posicao;

	cin >> tamanho;
	
	int numero = 0;
	
	cin >> menor;
	posicao = 0;
	for (int i = 1; i < tamanho; i++) {
		cin >> numero;

		if (numero < menor) {
			menor = numero;
			posicao = i;
		}
	}

	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
		
	return 0;
}


