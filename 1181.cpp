#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double matriz[12][12];
	int linha = 0;
	char operacao;

	cout.precision(1);
	cout << fixed;

	cin >> linha;
	cin >> operacao;

	for (int l = 0; l < 12; l++) {
		for (int c = 0; c < 12; c++) {
			cin >> matriz[l][c];
		}
	}
		
	if (operacao == 'S') {
		double soma = 0;
		for (int c = 0; c < 12; c++) {
			soma += matriz[linha][c];
		}
		cout << (soma * 1.0 )<< endl;
	}
	else {
		double media = 0;
		for (int c = 0; c < 12; c++) {
			media += matriz[linha][c];
		}
		media /= 12;
		cout << (media * 1.0) << endl;
	}

	return 0;
}