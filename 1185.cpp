#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double matriz[12][12];
	char operacao;

	cout.precision(1);
	cout << fixed;

	cin >> operacao;

	for (int l = 0; l < 12; l++) {
		for (int c = 0; c < 12; c++) {
			cin >> matriz[l][c];
		}
	}
		
	if (operacao == 'S') {
		double soma = 0;
		int pivo = 11;
		for (int l = 0; l < 12; l++) {
			for (int c = 0; c < pivo; c++) {
				soma += matriz[l][c];
			}
			pivo--;
		}
		cout << (soma * 1.0) << endl;
	}
	else {
		double soma = 0;
		int pivo = 11;
		for (int l = 0; l < 12; l++) {
			for (int c = 0; c < pivo; c++) {
				soma += matriz[l][c];
			}
			pivo--;
		}
		soma /= 66;
		cout << (soma * 1.0) << endl;
	}
	
	return 0;
}