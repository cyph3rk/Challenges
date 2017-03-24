#include <iostream>
#include <stdio.h>
#include <queue>
#include <iomanip>

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

		//Zera Matriz
		for (int l = 0; l < tamanho; l++) {
			for (int c = 0; c < tamanho; c++) {
				matriz[l][c] = 0;
			}
		}

		int pivo = 0;
		int contador = 0;

		// Superior
		pivo = 0;
		contador = 1;
		for (int l = 0; l <= (tamanho / 2); l++) {
			for (int c = pivo; c < (tamanho - pivo); c++) {
				matriz[l][c] = contador;
			}
			pivo++;
			contador++;
		}

		// Esquerda
		pivo = 0;
		contador = 1;
		for (int l = 0; l <= (tamanho / 2); l++) {
			for (int c = pivo; c < (tamanho - pivo); c++) {
				matriz[c][l] = contador;
			}
			pivo++;
			contador++;
		}

		// Direita
		pivo = (tamanho / 2);
		contador = (tamanho % 2 == 0 ? tamanho / 2 : ((tamanho / 2) + 1));
		for (int l = (tamanho / 2); l < tamanho; l++) {
			for (int c = pivo; c <= (tamanho - pivo); c++) {
				matriz[c][l] = contador;
			}
			pivo--;
			contador--;
		}

		// Inferior
		pivo = (tamanho / 2);
		contador = (tamanho % 2 == 0 ? tamanho / 2 : ((tamanho / 2) + 1));
		for (int l = (tamanho / 2); l < tamanho; l++) {
			for (int c = pivo; c < (tamanho - pivo); c++) {
				matriz[l][c] = contador;
			}
			pivo--;
			contador--;
		}
				
		for (int l = 0; l < tamanho; l++) {
			for (int c = 0; c < tamanho; c++) {				
				cout << setw(3);
				cout << matriz[l][c];
				if (c < tamanho-1) {					
					cout << " ";
				}
			}
			cout << endl;
		}
		if (!numeros.empty()){
			cout << endl;
		}
	}

	return 0;
}
