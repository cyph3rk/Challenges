#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double matriz[12][12];
	int coluna = 0;
	char operacao;

	cout.precision(1);
	cout << fixed;

	cin >> coluna;
	cin >> operacao;

	for (int l = 0; l < 12; l++) {
		for (int c = 0; c < 12; c++) {
			cin >> matriz[l][c];
		}
	}
		
	if (operacao == 'S') {
		double soma = 0;
		for (int l = 0; l < 12; l++) {
			soma += matriz[l][coluna];
		}
		cout << (soma * 1.0 )<< endl;
	}
	else {
		double media = 0;
		for (int l = 0; l < 12; l++) {
			media += matriz[l][coluna];
		}
		media /= 12;
		cout << (media * 1.0) << endl;
	}

	return 0;
}