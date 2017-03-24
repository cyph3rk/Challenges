#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main() {
	int matriz[100][100];
	queue<int> numeros;
	int tamanho = 1;
	
	while (true) {
		cin >> tamanho;
		if (!std::cin) {
			break;
		}
		numeros.push(tamanho);
	}

	while (!numeros.empty()) {

		tamanho = numeros.front();
		numeros.pop();

		for (int l = 0; l < tamanho; l++) {
			for (int c = 0; c < tamanho; c++) {
				matriz[l][c] = 3;
			}
		}

		for (int l = 0; l < tamanho; l++) {
			matriz[l][l] = 1;
			matriz[l][(tamanho-1)-l] = 2;
		}

		for (int l = 0; l < tamanho; l++) {
			for (int c = 0; c < tamanho; c++) {
				cout << matriz[l][c];				
			}
			cout << endl;
		}
	}

	return 0;
}