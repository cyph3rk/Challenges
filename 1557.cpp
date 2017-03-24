#include <iostream>
#include <stdio.h>
#include <queue>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int matriz[100][100];
	queue<int> numeros;
	int tamanho = 1;

	while (tamanho) {
		cin >> tamanho;
		numeros.push(tamanho);
	}

	while (!numeros.empty()) {

		tamanho = numeros.front();
		numeros.pop();

		for (int l = 0; l < tamanho; l++) {
			for (int c = 0; c < tamanho; c++) {
				matriz[l][c] = 0;
			}
		}

		int pivo = 1;
		for (int l = 0; l < tamanho; l++) {			
			for (int c = l; c < tamanho; c++) {
				matriz[l][c] = pivo;
				matriz[c][l] = pivo;
				pivo += pivo;
			}
			pivo = matriz[l][l+1]+ matriz[l][l+1];
		}		

		string aux = std::to_string(matriz[tamanho-1][tamanho - 1]);
		int espacamento = aux.length();

		for (int l = 0; l < tamanho; l++) {
			for (int c = 0; c < tamanho; c++) {
				cout << setw(espacamento);
				cout << matriz[l][c];
				if (c < tamanho - 1) {
					cout << " ";
				}
			}
			cout << endl;
		}
		if (!numeros.empty()) {
			cout << endl;
		}
	}

	return 0;
}
